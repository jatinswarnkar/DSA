#include<iostream>
using namespace std;

int main(){
   /* int n;
    cin>>n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<j<<" ";
            j = j+1;
        }
        cout<<endl;
        i = i +1;
    }
    

    int n;
    cin>>n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<i<<" ";
            j = j+1;
        }
        cout<<endl;
        i = i +1;
    }
    

   int n;
    cin>>n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<n-j+1<<" ";
            j = j+1;
        }
        cout<<endl;
        i = i +1;
    }


   int n;
    cin>>n;

    int i = 1;
    int count = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<count<<" ";
            count = count +1;
            j = j + 1;
           
        }
        cout<<endl;
        i = i +1;
    }


    int n;
    cin>>n;

    int row = 1;

    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<"* ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    
   int n;
    cin>>n;

    int row = 1;

    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<row;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
     }

    int n;
    cin>>n;

    int row = 1;
    int count = 1;

    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<count<<" ";
            count = count + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }*/


    /*
    int n;
    cin>>n;

    int row = 1;
    int count = 0; 
    while(row<=n){
        int col = 1;
        int value = row;
        while(col<=row){
            cout<<value<<" ";
            value = value+1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
    */
   /*
    // same as  above without using value term 
    int n;
    cin>>n;

    int row = 1;
    int count = 0; 
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<row+col-1<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }*/
/*
// decreasing count in above
     int n;
    cin>>n;

    int row = 1;
    int count = 0; 
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<row+col-1<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
*/
/*
 int n;
    cin>>n;

    int row = 1;
    
    while(row<=n){
        int col = 1;
        
        while(col<=n ){
            char ch = 'A' + row -1;
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
       
    } */
 /*
     int n;
    cin>>n;

    int row = 1;

    while(row<=n){
        int col = 1;
        
        while(col<=n ){
            char ch = 'A' + col -1;
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }*/


/*
    int n;
    cin>>n;

    int row = 1;
    char ch = 'A';
    while(row<=n){
        int col = 1;
        
        while(col<=n ){
            cout<<ch<<" ";
            ch = ch + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
*/
/*
int n;
    cin>>n;

    int row = 1;
    
    while(row<=n){
        int col = 1;
        
        while(col<=n ){
            char ch = row+col+'A'- 2;
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
*/
/*
int n;
    cin>>n;

    int row = 1;
    char ch = 'A';

    while(row<=n){
        int col = 1;
        
        while(col<=row){
            cout<<ch<<" ";
            ch = ch+1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }*/
/*
    int n;
    cin>>n;

    int row = 1;
    
    while(row<=n){
        int col = 1;
        
        while(col<=row){
            char ch = row+col+'A'- 2;
            cout<<ch<<" ";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }*/
    

    /*
    int n;
    cin>>n;

    int row = 1;
    
    while(row<=n){
        int col = 1;
        char start = 'A' + n - row;
        while(col<=row){
            cout<<start<<" ";
            start = start + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }*/


    /*
    int n;
    cin>>n;

    int row = 1;
    
    while(row<=n){
        //space print 
        int space = n-row;
        while(space){
            cout<<" ";
            space = space -1;
        }
        //star print 
        int col = 1;

        while(col<=row){
            cout<<"*";
            col = col + 1; 
        }
        cout<<endl;
        row = row + 1;
    }
*/
/*
int n;
    cin>>n;

    int row = 1;
    
    while(row<=n){
        //space print 
        int space = 1;
        while(space<row){
            cout<<" ";
            space = space + 1;
        }
        //star print 
        int col = n- row + 1;

        while(col){
            cout<<row; //change as "*" for star  pattern
            col = col - 1; 
        }
        cout<<endl;
        row = row + 1;
    }*/

/*
int n;
    cin>>n;

    int row = 1;
    
    while(row<=n){
        //space print 
        int space = 1;
        while(space<row){
            cout<<" ";
            space = space + 1;
        }
        //star print 
        int col = n- row + 1;

        while(col){
            cout<<row + col- 1; 
            col = col - 1; 
        }
        cout<<endl;
        row = row + 1;
    }*/

/*
    int n;
    cin>>n;

    int row = 1;
    
    while(row<=n){
        //space print 
        int space = n-row;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        //1st triangle print 
        int col = 1;

        while(col<=row){
            cout<<col; 
            col = col + 1; 
        }
        // 2nd triangle 
        int start = row - 1;
        while (start){
            cout<<start;
            start = start - 1;
        }
        cout<<endl;
        row = row + 1;
    }*/


 int n;
    cin>>n;

    int row = 1;
    
    while(row<=n){
        //first triangle  
        int col = 1;
        while(col<=n-row+1){
            cout<<col;
            col = col + 1;
        }
        //* triangle
        int value = 1;

        while(value<=2*row-2){
            cout<<"*"; 
            value = value + 1; 
        }
        // 2nd triangle 
        int start = n- row + 1;
        while (start){
            cout<<start;
            start = start - 1;
        }
        cout<<endl;
        row = row + 1;
    }



}