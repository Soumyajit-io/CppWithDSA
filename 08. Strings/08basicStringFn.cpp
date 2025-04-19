#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<s.size();//for length
    s.push_back('d');// to add one charecter
    s.pop_back();// remove last charecter
    s.pop_back();
    cout<<s;

    string a = "abc";//addition of string
    string b= "def";
    string c = a+b;
    cout<<c<<endl;
    reverse(c.begin()+2,c.end());//reverse the string from 2nd position to end
    cout<<c<<endl;
}