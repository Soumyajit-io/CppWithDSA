#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row number for first matrix ";
    cin>>m;
    cout<<"Enter column number for first matrix ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //printing
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j];
        
        
        }
        
        
    }

}