//Write a c program to find the largest element of a given 2D array of intreger
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row number";
    cin>>m;
    cout<<"Enter column number";
    cin>>n;
    int arr[m][n];
    
    //input
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }


    
    int max = arr[0][0];
    for(int i=1;i<=m-1;i++){
        for(int j=1;j<=n-1;j++){
            if(arr[i][j]>max) max = arr[i][j];
        }
    }

    cout<<"The largest element is "<<max;
}