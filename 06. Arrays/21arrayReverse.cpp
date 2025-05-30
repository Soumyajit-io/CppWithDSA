//Write a program to reverse array without extra arrqay

#include<iostream>
#include<vector>
using namespace std;
#include <algorithm>
void display(vector<int>& v){//this is a new vector has a different memory location.
    //                        so we will add ''&'' to make it a reference variable.
    
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

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
    display(v);
    //1. using while loop...
    // int i=0;
    // int j = v.size()-1;
    // while(i<=j){
    //     //swap v[i]andv[j]
    //     int temp = v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
        

    // }
    // display(v);
    //2. using for loop...
    // for(int i=0,j=v.size()-1;i<=j;i++,j--){
    //     int temp = v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    // }
    //3. using buildin function
    reverse(v.begin(), v.end());

    display(v);
}