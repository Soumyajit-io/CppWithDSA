#include<iostream>
using namespace std;
void swap(int &a,int &b){// here '&' is not umpercent it is the symbol of alias
    int temp =a;//        
     a=b ;
     b= temp;
    return;

}
int main (){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}