//program to print 1 to n
#include <iostream>
using namespace std;
void print(int a,int b){//using an extra parameter
    if(b<a) return;
    cout<<a<<endl;
    return print(a+1,b);//call
    
}
int main (){
    print(1,15);
}