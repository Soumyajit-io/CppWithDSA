//Write a program to copy the contents of one array into another in the reverse order without extra array

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


}