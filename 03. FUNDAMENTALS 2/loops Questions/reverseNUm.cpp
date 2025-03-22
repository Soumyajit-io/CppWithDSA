#include<iostream>
using namespace std;
int main(){
    int n , x =0, sum =0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0){
        x=n%10;
        sum*=10;
        sum+=x;
        n=n/10;
        


    }
    cout<<sum;
    
}