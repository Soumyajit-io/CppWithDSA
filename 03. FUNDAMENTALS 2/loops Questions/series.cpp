//1-2+3-4+5-6+7-8+9
#include<iostream>
using namespace std;
int main(){
    int sum =0;
    
    for(int i = 1;i<=1000;i++){
        if(i%2==0) sum +=i;
        else sum-=i;
    }
    cout<<sum;
}