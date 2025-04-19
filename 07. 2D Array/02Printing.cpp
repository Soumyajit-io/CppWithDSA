#include<iostream>
using namespace std;
int main(){// 2D are also Array of Arrays 
    //Declaration of a 2D Array 
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};// this are the correct methods
    // row -> 3   0-2
    //columns ->3  0-2
    for(int m=0;m<=2;m++){
        for(int n=0;n<=2;n++){
            cout<<arr[m][n]<<" ";
        }
        cout<<endl;
    }
}