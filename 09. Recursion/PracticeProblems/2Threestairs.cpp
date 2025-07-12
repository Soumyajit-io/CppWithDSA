//number of ways you can go with stairs , 1 , 2 and 3 steps allowed.
#include<iostream>
using namespace std;

int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stair(n-1)+stair(n-2);
    

}
int main(){
    int n=4;
    cout<<stair(n);
}