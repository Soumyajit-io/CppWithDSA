//write a program to calculate the sum of odd numbers between a and b.
#include<iostream>
using namespace std;
int sum=0;
int summ(int a, int b,int n){
    if(n==b+1)return 0;
    if(n%2!=0){
        cout<<n<<" ";
        sum+=n;
    }
    summ(a,b,n+1);
    return sum;

}
int main(){
    int a =10,b=43,n=a;
    cout<<"The sum is "<<summ(a,b,n);
}