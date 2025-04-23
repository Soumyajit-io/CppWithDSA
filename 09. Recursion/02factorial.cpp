//program to print factorial
#include <iostream>
using namespace std;
int fac(int a){
    if(a==1 || a==0) return 1;//base case
    int ans = a*fac(a-1);//somework
    return ans;//recursion call
}
int main (){
    cout<<fac(5);
}