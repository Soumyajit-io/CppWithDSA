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
    for(int i=0;i<m;i++){
        if(i%2==0){//0,2,4,6
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{//1,3,5,
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        
        
    }

}
