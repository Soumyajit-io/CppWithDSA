#include <iostream>
using namespace std;
void print(int a){
    if(a==0) {//base case
        return ;
    }
    
    print(a-1);//call
    cout<<a<<endl;//some work
    
}
int main (){
    print(10);
}