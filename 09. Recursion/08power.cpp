//program to print a to the power b using recursion
#include <iostream>
using namespace std;

int poww(int a,int b){
   if(b==0) return 1;
    int ans = a*poww(a,b-1);//somework
    return ans;//recursion call
}
int main (){
    cout<<poww(2,10);
}