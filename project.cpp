#include <iostream>
#include <cmath>
#include <iomanip>

class BlackScholesCalculator {
public:
    double calculateCallOptionPrice(double spotPrice, double strikePrice, double timeToMaturity, double volatility, double riskFreeRate) {
        double d1 = calculateD1(spotPrice, strikePrice, timeToMaturity, volatility, riskFreeRate);
        double d2 = calculateD2(d1, volatility, timeToMaturity);

        return spotPrice * cumulativeDistributionFunction(d1) - strikePrice * exp(-riskFreeRate * timeToMaturity) * cumulativeDistributionFunction(d2);
    }

    double calculatePutOptionPrice(double spotPrice, double strikePrice, double timeToMaturity, double volatility, double riskFreeRate) {
        double d1 = calculateD1(spotPrice, strikePrice, timeToMaturity, volatility, riskFreeRate);
        double d2 = calculateD2(d1, volatility, timeToMaturity);

        return strikePrice * exp(-riskFreeRate * timeToMaturity) * cumulativeDistributionFunction(-d2) - spotPrice * cumulativeDistributionFunction(-d1);
    }

private:
    double calculateD1(double spotPrice, double strikePrice, double timeToMaturity, double volatility, double riskFreeRate) {
        return (log(spotPrice / strikePrice) + (riskFreeRate + pow(volatility, 2) / 2) * timeToMaturity) / (volatility * sqrt(timeToMaturity));
    }

    double calculateD2(double d1, double volatility, double timeToMaturity) {
        return d1 - volatility * sqrt(timeToMaturity);
    }

    double cumulativeDistributionFunction(double x) {
        const double A1 = 0.31938153;
        const double A2 = -0.356563782;
        const double A3 = 1.781477937;
        const double A4 = -1.821255978;
        const double A5 = 1.330274429;
        const double RSQRT2PI = 0.3989422804014337;

        double k = 1.0 / (1.0 + 0.2316419 * fabs(x));
        double y = ((((A5 * k + A4) * k) + A3) * k + A2) * k + A1;

        double result = (1.0 - RSQRT2PI * exp(-0.5 * x * x) * y);

        return (x < 0.0) ? (1.0 - result) : result;
    }
};

int main() {
    BlackScholesCalculator calculator;

    // Example usage: Call Option
    double spotPrice = 100.0;
    double strikePrice = 100.0;
    double timeToMaturity = 1.0;
    double volatility = 0.2;
    double riskFreeRate = 0.05;

    double callOptionPrice = calculator.calculateCallOptionPrice(spotPrice, strikePrice, timeToMaturity, volatility, riskFreeRate);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Call Option Price: $" << callOptionPrice << std::endl;

    // Example usage: Put Option
    double putOptionPrice = calculator.calculatePutOptionPrice(spotPrice, strikePrice, timeToMaturity, volatility, riskFreeRate);

    std::cout << "Put Option Price: $" << putOptionPrice << std::endl;

    return 0;
}
