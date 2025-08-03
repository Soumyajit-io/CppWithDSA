#include<iostream>
using namespace std;
class vehicle{
    public:
    int typeSize;
    int enginesize;
    int lights;
    string companyName;
};

class bike{
    public:
    int handlesize;
    void show(){// function overriding 
        cout<<"bike ka show";
    }
};

class scooty : public vehicle , public bike{//multiple
    public:
    int bucket;
    void show(){//same function diff work
        cout<<"scoty ka show"<<endl;
    }
};
int main (){
    scooty kt;
    kt.lights =54;
    kt.companyName ="kt";
    kt.enginesize =54;
    kt.typeSize =54;
    kt.handlesize =54;
    kt.show();//
    kt.bike::show();
}