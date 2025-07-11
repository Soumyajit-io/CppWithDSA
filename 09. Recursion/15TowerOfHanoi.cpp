
#include<iostream>
using namespace std;
int number=1;
void toh(int n,char a,char b,char c){
    
    if(n==0) return;
    toh(n-1,a,c,b);
    cout<<number<<" "<<a<<" -> "<<c<<endl;
    number++;
    toh(n-1,b,a,c);
}
int main (){
    int n=10;
    toh(n,'A','B','C');
}