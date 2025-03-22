#include<iostream>
using namespace std;
int main(){
    int n , x =1;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0){
        x*=n;
        n--;
        
    }
    cout<<x;
    
}