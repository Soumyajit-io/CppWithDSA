#include<iostream>
using namespace std;
class vehicle{
    public:
    int typeSize;
    int enginesize;
    int lights;
    string companyName;
}

class bike{
    int handlesize;
}

class scooty : public vehicle ,bike{//multiple
    int bucket;
}
int main (){
    scooty kt;
    kt.lights =54;
    kt.companyName ="kt";
    kt.enginesize =54;
    kt.typeSize =54;
    kt.handlesize   =54;
}