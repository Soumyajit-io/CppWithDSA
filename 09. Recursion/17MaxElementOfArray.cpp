//print the maximum element of array
#include<iostream>
#include<limits.h>
using namespace std;

int arru(int arr[],int n,int max){
    if(n==0 ) return max;
    if(*arr>max) max = *arr;

    arru(++arr,n-1,max);
    
    
}







int arru2(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],arru2(arr,n,idx+1));
}
int main (){
    int arr[]={1,7,3,4,5,6,4,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    cout<<arru(arr,size,max)<<endl;
    cout<<arru2(arr,size,0)<<endl;

}