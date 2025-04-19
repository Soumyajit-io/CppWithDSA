//Write a program to rotate the matrix by 90 degrees clockwise
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter order";
    cin>>m;
    
    int arr[m][m];
    
    
    //input and printing 
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            if(j>i) {
                int temp = arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            if(j==) {
                
            }
        }
    }

    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}