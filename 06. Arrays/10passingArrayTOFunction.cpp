#include<iostream>
using namespace std;
void PrintArray(int* a,int size){
    for(int i =0 ; i<=size-1 ;i++){//this is not a new array ...
        //                    it is the same array that was passed to the function  
        cout<<a[i]<<" ";     // so when a array is passed to a function it sends the address of the first element of the array
    }
    return;
    

}
int main (){
    int arr[]= {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    PrintArray(arr,size);
}
