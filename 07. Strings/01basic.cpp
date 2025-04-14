#include<iostream>
using namespace std;
int main(){// Strings are basically char Array
     char str[3]={'a','b','c'};      //'\0':it is a null charecter
    // char str[3]= "ab";
    for(int i=0;i<3;i++){
        cout<<str[i]<<" ";
    }
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
    cout<<str;
}
