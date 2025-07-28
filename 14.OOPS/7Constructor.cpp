#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    //Default constructor
    //parameter wala constructor: Use to initialtsed the value
    Bike(int tyreSize,int engineSize){//this is a constructor
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
        cout<<"Constructor call hua "<<endl;
    }
};
int main (){
    Bike ktm(10,50);
    Bike RCbc(16,100);
    cout<<ktm.tyreSize<<" "<<ktm.engineSize;
    

}