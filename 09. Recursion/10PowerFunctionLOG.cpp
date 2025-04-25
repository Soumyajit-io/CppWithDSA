//wap to calculate the nth term
#include <iostream>
using namespace std;
int fibo(int x,int n){
    if(n==1) return x;
    if(n%2==0){
        int ans = fibo(x,n/2);
        return ans*ans;
    }
    else{
        int ans =fibo(x,n/2-1);
        return ans*ans;
    }
}

int main (){
    cout<<fibo(3,3);
}