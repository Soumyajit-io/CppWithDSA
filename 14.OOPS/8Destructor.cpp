#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    //
    //
    Bike(int tyreSize,int engineSize){//this is a constructor
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
        cout<<"Constructor call hua "<<endl;
    }
    ~Bike(){//this is a destructor... call when a object is out of scope
        cout<<"Destructor call hua";
    }
};
int main (){
    bool flag = true;
    if(flag){
        Bike bmw(20,45);
        cout<<bmw.tyreSize<<" "<<bmw.engineSize;
    }
    Bike ktm(10,50);
    Bike RCbc(16,100);
    cout<<ktm.tyreSize<<" "<<ktm.engineSize;
    

}