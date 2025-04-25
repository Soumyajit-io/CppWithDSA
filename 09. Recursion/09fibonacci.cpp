//wap to calculate the nth term
#include <iostream>
using namespace std;
int fibo(int n){// 0 1 1 2 3 5 8 13 
    if(n==1) return 0;
    if(n==2) return 1;
    n=fibo(n-1)+fibo(n-2); 
    return n;

}

int main (){
    int n;
    cout<<"Enter the nth Term";
    cin>>n;
    cout<<fibo(n);
}
