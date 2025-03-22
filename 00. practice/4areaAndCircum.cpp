#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter radius";
    cin>>a;
    b = 3.14*a*a;
    c = 3.14*2*a;
    if (b>c)
    {
        cout<<"Area > Perimeter";
    }
    else{cout<<"Perimeter > Area";}


    
}