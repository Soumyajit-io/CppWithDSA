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
    //transpose
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            if(j>i) {
                int temp = arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
    //reverse
    for(int k=0;k<=m-1;k++){
        int i = 0;
        int j = m-1;
        while(j>i){
            int temp = arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=temp;
            i++;
            j--;
        }
    }
//printing
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=m-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}