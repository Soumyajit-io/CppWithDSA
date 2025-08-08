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
    virtual void show(){
        cout<<"bike ka show"<<endl;
    }
};

class scooty : public vehicle , public bike{
    public:
    int bucket;
    void show(){
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

    bike* kn;
    kn = &kt;
    kn->show();
}
