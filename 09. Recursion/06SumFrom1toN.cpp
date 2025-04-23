//program to print the sum from 1 to n using extra parameter
#include <iostream>
using namespace std;
int print(int a,int b){//using an extra parameter
    if(b<a) return 0;
    
    return a+print(a+1,b);//call
    
}
int main (){
    cout<<print(1,10);
}