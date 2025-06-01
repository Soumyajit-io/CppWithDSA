#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[5]={5,4,3,2,1};
    
    for(int i=0;i<5-1;i++){//n-1 passes
        bool flag = true;
        for(int j=0;j<5-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }   
        }
        if(flag==true) break;//swap didnot happen 
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}