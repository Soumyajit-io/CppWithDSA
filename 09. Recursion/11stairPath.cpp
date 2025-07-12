//number of ways you can go with stairs , 1 and 2 steps allowed.
#include<iostream>
using namespace std;
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stair(n-1)+stair(n-2);
}
int main (){
    cout<<stair(4);
}20