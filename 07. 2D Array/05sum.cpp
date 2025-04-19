//Write a program to find the sum of element of a given 2D array of intreger
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

    int sum=0;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;

}