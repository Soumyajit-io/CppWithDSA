#include<iostream>
using namespace std;
int main(){
    int n , x =0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0){
        n=n/10;
        x++;

    
    }
    if(x==0) cout<<1;
    else cout<<(x);
}