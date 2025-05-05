//wap to calculate the nth term
#include <iostream>
using namespace std;
int powr(int x,int n){
    if(n==1) return x;
    if(n%2==0){
        int ans = powr(x,n/2)*powr(x,n/2);
        return ans;
    }
    else{
        int ans =powr(x,n/2)*powr(x,n/2)*x;
        return ans;
    }
}

int main (){
    cout<<powr(2,3);
}