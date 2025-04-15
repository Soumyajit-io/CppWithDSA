
#include<iostream>
#include<string>
#include<algorithm>


using namespace std;
int main (){
    string str ="123456";
    int x = stoi(str);//stoi:String to intreger
    cout<<x<<endl;

    string str2 ="12345678912345";
    long long  y = stoll(str2);//stoi:String to long long
    cout<<y;

}