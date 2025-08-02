#include<iostream>
using namespace std;
class Bike{
public:
static int noofbikes;//this belogs to the class
    int tyreSize;
    int engineSize;
   

    Bike(int tyreSize,int engineSize){//this is a constructor
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }

    static void increaseNoOfBikes(){
        noofbikes++;
    }
};
int Bike::noofbikes=1;//
int main (){
    
    Bike ktm(10,50);
    cout<<ktm.noofbikes<<" "<<ktm.tyreSize<<" "<<ktm.engineSize<<endl;
    ktm.increaseNoOfBikes();
    Bike RE(20,45);
cout<<RE.noofbikes<<" "<<RE.tyreSize<<" "<<RE.engineSize;
}