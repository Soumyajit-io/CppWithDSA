#include<iostream>
using namespace std;
int main(){
     cout<<"Enter Day Number";
     int n ;
     cin>>n;
     switch(n){
        case 1 ://x ar value jodi 1 hoye
            cout<<"monday";
            break;
        case 2 :
            cout<<"tuesday";
            break;
        case 3 :
            cout<<"wednesday";
            break;
        case 4 :
            cout<<"thrusday";
            break;
        case 5 :
            cout<<"friday";
            break;
        case 6 :
            cout<<"saterday";
            break;
        case 7 :
            cout<<"sunday";
            break;
        default :
            cout<<"Invalid number";
     }

}