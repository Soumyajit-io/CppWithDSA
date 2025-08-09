//check if array can be partitioned into 2 continuous 
//array of equal sum
#include<iostream>
using namespace std ;
int main(){
    bool flag = false;
    int arr[] = {1,2,3,4,5,5};
    //formula
    //let the idx be x
    //2*pre[x]=pre[n-1]
    for(int i =1;i<6;i++){
        arr[i]+=arr[i-1];
    }
    for(int i =1;i<6;i++){
        if(2*arr[i]==arr[6-1]){
            flag = true;
        }
    }
    if(flag) cout<<"partitioned";
    else cout<<"not found";
    
    
}
