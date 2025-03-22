#include<iostream>
using namespace std;

int main (){
    int n=0 ,arr[5] = {1,5,8,4,5};
    for(int i = 0;i<=4;i++){
        n=n+arr[i];
    }
    cout<<n;
}