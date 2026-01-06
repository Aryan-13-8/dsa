#include <bits/stdc++.h>
using namespace std;

void functionname(int n){
    if(n<1)
        return ;
    
    cout << "aryan"<<endl;
    functionname(n-1);
}

void f(int i,int n){
    if(i>n)
    return ;
    cout << i <<endl;
    f(i+1,n);
}
void funtion2(int i, int n){
    if(n-i<0)
    return;
    int z=n-i;
    cout << z <<endl;
    funtion2(i+1,n);
}
//print 1 to n using backtracing
void funtion3(int i,int n){
    if(i<1)
    return;
    funtion3(i-1,n);
    cout << i <<endl;
}
//print n to 1 using backtracing
void funtion4(int i,int n){
    if(i>n)
    return;
    funtion4(i+1,n);
    cout<<i<<endl;

}
//print sum of n
//two method 1)parameter and (2)funtional
//first method parameter
void funtion5(int n, int sum){
    if(n==0){
        cout<<sum;
    return;
    }
    
    funtion5(n-1,sum+n);
}
//second method funtional
int sum(int n){
    if(n==0) return 0;
    return sum(n-1) +n;
}
//factorial of n
int factorial(int n){
    if(n==0) return 1;
    return factorial(n-1)*n;
}


int main() {
    int n;
    //int sum=0;
    cin>>n;
    //functionname(n);
    //f(i,n) ;
    //funtion2(i,n);
    //funtion4(i,n);
   //funtion5(n,0);
   //cout << sum(n);
   cout<< factorial(n);

    return 0;
}