//Write a program to find the sum of element of a given 2D array of intreger
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row number";
    cin>>m;
    cout<<"Enter column number";
    cin>>n;
    int arr1[m][n];
    int arr2[m][n];
    int arr3[m][n];
    
    //input and printing for first matrix
    cout<<"Enter First matrix";
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }


    //input  and printing for Second matrix
    cout<<"Enter second matrix";
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }


    //summation
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }



    //printing
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

}