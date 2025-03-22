#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int x ;
    cin>>x;
    cout<<"Enter a number : ";
    int y ;
    cin>>y;
    cout<<"Enter a number : ";
    int z ;
    cin>>z;

    if((x+y>z) && (y+z>x) && (z+x>y)){
        cout<<"Valid Triangle";

    }
    else{
        cout<<"Invalid triangle";
    }


}