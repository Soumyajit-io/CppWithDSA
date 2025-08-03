#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    Bike(int ts,int es) : tyreSize(ts), engineSize(es){

    }//shortcut way
};
void add(int a, int b){
    cout<<a+b;
}
//same function name but differnt parameters
void add(int a){
    cout<<a+10;
}
int main (){
    
    add(1,20);
    add(5);


    // Bike ktm(10,50);
    // cout<<" "<<ktm.tyreSize<<" "<<ktm.engineSize<<endl;
    
    // Bike RE(20,45);
    // cout<<" "<<RE.tyreSize<<" "<<RE.engineSize;
}