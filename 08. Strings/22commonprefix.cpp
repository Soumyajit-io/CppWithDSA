// Input n string and write a program to find the longest common prefix string of all the strings
#include<iostream>
#include<string>
#include<algorithm>
#include <vector>
#include <sstream>

using namespace std;
int main (){
    // flower ,flower , flight
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");


    for(int i =0;i<v.size();i++){
        cout<<v[i]<<endl;
    }


    cout<<endl;

    
    if(v.size()==1) cout<<v[0];
    sort(v.begin(),v.end());
    string first = v[0];
    string last = v[v.size()-1];
    string s ="";
    for(int i=0;i<min(first.size(),last.size());i++){
        if(first[i]==last[i]){
            s+=first[i];
        }
        else break;
    }
    cout<<s;
}