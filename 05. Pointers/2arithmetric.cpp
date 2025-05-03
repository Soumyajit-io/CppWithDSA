#include<iostream>
using namespace std;

int main (){
    int x =7;
    int* ptr = &x;
    cout<<ptr<<endl;
    cout<<x<<endl;
    ptr++;
    cout<<*ptr<<endl;
}