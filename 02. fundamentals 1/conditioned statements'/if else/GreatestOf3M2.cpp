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

     if(x>y){
        if(x>z){
            cout<<x <<" IS greatest";
        }
        else{
            cout<<z <<"Is greatest";
        }

     }
     else{//y>x

        if(y>z){
            cout<<y <<"Is greatest";
        }
        else{
            cout<<z<<"Is greatest";
        }
     }
}
