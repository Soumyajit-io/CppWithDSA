#include<iostream>
using namespace std; 

int main (){
    int arr[]= {1,2,3,4,5};
    int *p = arr; // p is a pointer to the first element of the array
    int* q = &arr[0];// this is also correct
   
    cout<<p<<endl;

   
    cout<<p[0]; // p[0] is the same as arr[0]
    
    
    for(int i =0 ; i<=4;i++){
       // cout<<p[i]<<" ";
       cout<<*p<<" ";
       p++; // p is incremented by 4 bytes because it is an integer pointer

    }
    p = arr; // p is again pointing to the first element of the array    
}