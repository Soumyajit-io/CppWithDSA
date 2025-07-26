#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int roll;  


    public:

    //setter:use to set values

    void setName(string n){
        name = n;
    }
    void setRoll(int r ){
        roll =r;
    }
    //getter: data return kroooo
    string getName(){
        return name;
    }
    int getRoll(){
        return roll;
    }
};
int main(){
    student s1;
    s1.setName("Soumyajit");
    s1.setRoll(17);
    cout<<s1.getName();
    cout<<s1.getRoll();

    
}  