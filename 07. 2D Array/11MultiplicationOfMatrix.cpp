//Write a program to calculate the multiplication of matrix
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m1,n1,m2,n2,sum;
    cout<<"Enter row number for first matrix ";
    cin>>m1;
    cout<<"Enter column number for first matrix ";
    cin>>n1;

    cout<<"Enter row number for Second matrix ";
    cin>>m2;
    cout<<"Enter column number for Secound matrix ";
    cin>>n2;
    int arr1[m1][n1];
    int arr2[m2][n2];
    int res[m1][n2];
    
    
    //input 
    cout<<"Enter the elements for first Matrix";
    for(int i=0;i<=m1-1;i++){
        for(int j=0;j<=n1-1;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the elements for first Matrix";
    for(int i=0;i<=m2-1;i++){
        for(int j=0;j<=n2-1;j++){
            cin>>arr2[i][j];
        }
    }

    if(n1!=m2) {
        cout<< "Invalid Order!!!";
    }
    else {
        //multiplication
        //resultant[i][j]=summation(r=0-->r=(n1/m2)-1)a[i][r]*b[r][j]
        for(int i=0;i<=m1-1;i++){
            for(int j=0;j<=n2-1;j++){
               sum =0;
               for(int k=0;k<n1;k++){//loop will run till columnof first matrix or row of second matrix
                sum+=arr1[i][k]*arr2[k][j];
               }
               res[i][j]=sum;
            }
        }
    }
    //Printing
    for(int i=0;i<=m1-1;i++){
        for(int j=0;j<=n2-1;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

}