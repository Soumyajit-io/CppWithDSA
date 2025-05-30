//Write a program to copy the contents of one array into another in the reverse order
#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> v;
    
    int n,b=0;
    cout<<"Enter Array Size";
    cin>>n;
    for(int i =0;i<n;i++){//input
        int f;//extra variable
        cout<<"Enter "<<i<<"th index element :";
        cin>>f;
        v.push_back(f);
    }
    vector<int> g(v.size());
    for(int i =0;i<n;i++){
        g[i]=v[n-1-i];
    }
    for(int i =0;i<n;i++){
        cout<<g[i];
    }
}