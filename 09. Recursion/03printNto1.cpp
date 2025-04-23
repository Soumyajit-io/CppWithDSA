//program to print n to 1
#include <iostream>
using namespace std;
void print(int a){
    if(a==0) {//base case
        return ;
    }
    cout<<a<<endl;//some work
    return print(a-1);//call
    
}
int main (){
    print(10);
}