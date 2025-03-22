#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i = 2;i<=x;i++){
        f*=i;
    }
    return f;
}


int main (){
    int n;
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        cout<<fact(i)<<endl;
    }
}