//Print all the elements of an array
#include<iostream>
using namespace std;
void arru(int arr[],int n){
    if(n==0 ) return ;
    cout<<*arr<<" ";
    arru(++arr,n-1);
}
int main (){
    int arr[]={1,2,3,4,5,6,4,7,8,9,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    arru(arr,size);
    
}