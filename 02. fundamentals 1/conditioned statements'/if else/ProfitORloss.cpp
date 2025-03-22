#include<iostream>
using namespace std;
int main(){
    float cp,sp;

    cout<<"Enter Cost Price";
    cin>>cp;

    cout<<"Enter Selling Price";
    cin>>sp;
    if(sp>cp){
        cout<<"You have a profit of "<<sp-cp;

    }
    if(cp>sp){
        cout<<"You have a loss of "<<cp-sp;

    }
    if(cp==sp){

        cout<<"You have neither profit nor loss";

    }

    

}