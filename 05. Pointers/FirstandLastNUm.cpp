#include<iostream>
using namespace std;
void find(int n , int* prt1 , int* ptr2){
    *ptr2 = n%10;
    while(n>9){
        n/=10;
    }
    *prt1 = n;
}


int main (){
    int n, ld;
    cout<<"Enter Number";
    cin>>n;

    // ld = n%10;
    // while(n>9){
    //     n=n/10;

    // }
    // cout<<n;
    // cout<<ld;
    int FirstD,LastD;
    int* ptr1 = &FirstD;
    int* ptr2 = &LastD;
    find(n,ptr1,ptr2);
    cout<<FirstD<<LastD;

}