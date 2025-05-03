#include<iostream>
using namespace std ;
int main(){
    int x = 5;
    int y = 5;
    int* p = &x;
    int* q = &y;
    cout<<*p + *q;// '*' is the dereference operator . which gives value present on that address
//         ||  ||
//          5 + 5 = 10 

}