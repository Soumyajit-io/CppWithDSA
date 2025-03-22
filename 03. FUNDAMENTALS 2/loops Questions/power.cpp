#include<iostream>
using namespace std;
int main(){
    int a,b,x =1;
    cout<<"Enter base number : ";
    cin>>a;
    cout<<"Enter exp number : ";
    cin>>b;
    for(int i = 1;i<=b;i++){
        x*=a;
    }
    cout<<x;
    
    
}