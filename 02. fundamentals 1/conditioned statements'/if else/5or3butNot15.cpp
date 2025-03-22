#include<iostream>
using namespace std;
int main(){
     cout<<"Enter a number";
     int n ;
     cin>>n;
    if(n%3==0 || n%5==0){
        if(n%15!=0){
            cout<<"matching ";
        }
        else{
            cout<<"not matching";
        }
    }
    else{
        cout<<"not matching";

    }
}