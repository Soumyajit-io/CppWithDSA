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

     if (x>y && x>z){
        cout<<x <<" Is the greatest";
     }
     if (y>x && y>z){
        cout<<y <<" Is the greatest";
     }
     if (z>y && z>x){
        cout<<z <<" Is the greatest";
     }
}