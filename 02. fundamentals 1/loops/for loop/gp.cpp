#include<iostream>
using namespace std;
int main(){
    cout<<"enter the nth term : ";
    int n, a=1;
    cin>>n;
    for (int i=1;i<=n;i++ ){
    cout<<a<<endl;
    a =  a * 2;
    }
}