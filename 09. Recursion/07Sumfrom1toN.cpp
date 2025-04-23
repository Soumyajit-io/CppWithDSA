//program to print the sum from 1 to n (using return type)
#include <iostream>
using namespace std;
int print(int a){
    if(a==0) return 0;
    if(a==1) return 1;//base case
    int ans = a+print(a-1);//somework
    return ans;//recursion call
}
int main (){
    cout<<print(10);
}