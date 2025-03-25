//Rotate the given array 'a by k steps where k is non-negative.

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
void reversepart(int start,int end,vector<int>& v){
    for(int i=start,j=end;i<=j;i++,j--){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}
int main (){
    vector<int> v;
    
    int n,x;
    cout<<"Enter Array Size";
    cin>>n;
    for(int i =0;i<n;i++){//input
        int f;//extra variable
        cout<<"Enter "<<i<<"th index element :";
        cin>>f;
        v.push_back(f);
    }
    display(v);
    cout<<endl<<"Enter Target :"<<endl;
    cin>>x;
    reversepart(0,n-1-x,v);
    reversepart(n-x,n-1,v);
    reversepart(0,n-1,v);
    display(v);
}