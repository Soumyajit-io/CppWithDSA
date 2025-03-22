#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool flag = true; // true means prime
    for(int i=2;i<=n-1;i++){
        if (n%i==0)
        {
            flag = false;
            break;
        }
       
    
    }
    if(n<=1) cout<<"neither prime not composite";
    else if (flag==true) cout<<"Prime";
    else cout<<"composite";
}