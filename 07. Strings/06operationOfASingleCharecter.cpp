#include<iostream>
#include<string>

using namespace std;
int main(){
    int count=0;
    string s = "hello";
    cout<<s;
    s[1]='l';//strings are mutable
    cout<<s;
}