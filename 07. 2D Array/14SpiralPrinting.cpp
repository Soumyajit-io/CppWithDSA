//Write a program to print the matrix in spiral form
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
    int minr =0;
    int minc=0;
    int maxr =m-1;
    int maxc=n-1;
    while(minr<=maxr && minc<=maxc){//spiral
    for(int j=minc;j<=maxc;j++){//right
        cout<<arr[minr][j]<<" ";
    }
    minr++;
    if(minr>maxr || minc>maxc) break;
    for(int i=minr;i<=maxr;i++){//down
        cout<<arr[i][maxc]<<" ";
    }
    maxc--;
    if(minr>maxr || minc>maxc) break;
    for(int j=maxc;j>=minc;j--){//left
        cout<<arr[maxr][j]<<" ";
    }
    maxr--;
    if(minr>maxr || minc>maxc) break;
    for(int i=maxr;i>=minr;i--){//up
        cout<<arr[i][minc]<<" ";
    }
    minc++;
}
    

}