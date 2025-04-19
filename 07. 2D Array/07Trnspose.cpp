//Write a program to find the transpose of a matrix
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row number";
    cin>>m;
    cout<<"Enter column number";
    cin>>n;
    int arr[m][n];
    int arrT[n][m];
    
    //input and printing 
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            arrT[i][j]=arr[j][i];
        }
        
    }

    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arrT[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}