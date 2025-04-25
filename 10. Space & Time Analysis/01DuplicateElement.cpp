
#include<iostream>
using namespace std;
int main (){
    int sum =0;
    int a[8]={1,2,3,3,4,5,6,7};
    for(int i=0;i<=7;i++){
        sum+=a[i];
    }
    int x = (7*8)/2;
    cout<<sum-x;

}