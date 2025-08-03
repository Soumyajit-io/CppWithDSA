#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    Bike(int ts,int es) : tyreSize(ts), engineSize(es){

    }//shortcut way
};

int main (){
    
    Bike ktm(10,50);
    cout<<" "<<ktm.tyreSize<<" "<<ktm.engineSize<<endl;
    
    Bike RE(20,45);
    cout<<" "<<RE.tyreSize<<" "<<RE.engineSize;
}