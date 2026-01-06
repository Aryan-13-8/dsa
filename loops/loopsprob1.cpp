#include <iostream>
 using namespace std;

 void print1(int n){ 
    for( int i=0; i<n; i++){
        for( int j=0; j<n ; j++){ 
            cout<< " *";
        }
            cout<<endl;}
    }

    void print2(int n){ for( int i=0; i<n; i++){
        for( int j=0; j<=i ; j++){ 
            cout<< " *";
        }
            cout<<endl;}

    }
    void print3(int n){ for( int i=0; i<n; i++){
        for( int j=0; j<=i ; j++){ 
            cout<< j;
        }
            cout<<endl;}

    }
    void print4(int n){ for( int i=0; i<n; i++){
        for( int j=0; j<=i ; j++){ 
            cout<< i;

        }
            cout<<endl;}

    }
    void print5(int n){ for( int i=0; i<n; i++){
        for( int j=0; j<n-i ; j++){ 
            cout<< " * ";

        }
            cout<<endl;}

    }
    void print6(int n){ for( int i=1; i<n; i++){
        for( int j=1; j<n-i+1 ; j++){ 
            cout<< j << " ";

        }
            cout<<endl;}

    }
    
    void print7(int n){ for( int i=0; i<n; i++){
        for( int j=0; j<n-i-1 ; j++){ 
            cout<< " ";}
        for( int j=0; j<2*i+1 ; j++ ) {
            cout<< "*";
        }
        for( int j=0; j<n-i-1 ; j++){ 
            cout<< " ";}   
        
            cout<<endl;}

    }
    void print8(int n){ for( int i=0; i<n; i++){
        //space 
        for( int j=0; j<i ; j++){ 
            cout<< " ";}
            //star
        for( int j=0; j< 2*n -(2*i+1) ; j++ ) {
            cout<< "*";
        }
        //space
        for( int j=0; j<i ; j++){ 
            cout<< " " ;}   
        
            cout<<endl;}

    }

    //patern 9 is the combination of pattern 7 and pattern 8 so fisrt print pattern 7 then 8

    void print9(int n){
        for ( int i=1; i<=2*n-1; i++){  
            int stars =i;
            if(i>n) stars = 2*n-i;
            for( int j=1; j<=stars; j++){
                cout<< "*";
            }
            cout<<endl;
        }
    }
    //is pattern 10 me pahle do loop define kiye ek row and coloumn ke liye then humne 
    //then if else ki help se row ki start me o ayega yaah 1 decide kiya the uske baad humne 
    //start ki value change kardii
    void print10(int n){ 
        for( int i=0; i<n ; i++){ 
            int start=1;
            if(i%2==0 ) start =1;
            else start=0;
            for( int j=0; j<i+1; j++){
                cout << start ;
                start= 1-start;

            }
            cout <<endl;
        }
    }
    
    void print11(int n){
        for( int i =0; i<n; i++){
            for(int j=1; j<=i+1; j++){
                cout<<j;
            }
            for( int j=0; j<2*n-2*(i+1); j++){
                cout<<" ";

            }
            for(int j=i+1; j>0; j--){
                cout<<j;
            }
            cout<<endl;
        }
    } 

    void print12(int n){
        int num=1;
        for ( int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                cout <<num << " ";
                num=num+1;
            }
            cout<<endl;
        }
    }
    //important as i see new concept
    void print13(int n){
    for(int i=0; i<n; i++){
        for(char ch ='A'; ch< 'A'+i; ch++){
            cout<<ch <<" ";

        }
        cout<<endl;

    }
    }
    void print14(int n){
        for(int i=0; i<n; i++){
            for(char ch='A'; ch<'A'+ (n-i); ch++){
                cout<< ch;
            }
            cout<<endl;
        }
    
    }
    void print15(int n){
    for(int i=0; i<n; i++){
        char ch='A'+i;
        for(int j =0; j<i+1; j++){
            cout<< ch;
    
        }
       cout<<endl;
    }
    }
    void print16(int n){ for( int i=0; i<n; i++){
        //for space
        for( int j=0; j<n-i-1 ; j++){ 
            cout<< " ";}
            //character
            char ch='A';
            int breakpoint=(2*i+1)/2;
        for( int j=0; j<2*i+1 ; j++ ) {
            cout<< ch;
            if(j<breakpoint) ch++;
            else
            ch--;
        }
        //for space
        for( int j=0; j<n-i-1 ; j++){ 
            cout<< " ";}   
        
            cout<<endl;}

    }




   
            

    

    int main() {
       int t;
       cin>>t;
       for(int i=0;i<t;i++){
        int n;
        cin>>n;
       
        print16(n);
    
       }
       
    }
   

