#include<iostream>
using namespace std;
class bike{
    public:
    int handlesize;
    virtual void refueling() =0;//abstraction class
    //this fn is the blueprint
};

class scooty :public bike{
    public:
    int bucket;
    void refueling(){
        cout<<"refueling";
    }
};
int main (){
    scooty kt;
    kt.bucket=0;
    kt.refueling();
}
