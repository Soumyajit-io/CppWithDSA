#include<iostream>
#include<vector>
using namespace std;
void change(vector<int>& a){//this is a new vector has a different memory location.
    //                        so we will add ''&'' to make it a reference variable.
    a[0]=99;
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}


int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(6);
    v.push_back(7);
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
   cout<<endl;
   change(v);
   for(int i = 0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}