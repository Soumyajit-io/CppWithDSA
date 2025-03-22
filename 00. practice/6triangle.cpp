#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"1";
    cin>>a;
    cout<<"2";
    cin>>b;
    cout<<"3";
    cin>>c;
    
    if (a==b && b==c)
    {
        cout<<"equi";
    }
    if (a!=b && b!=c)
    {
        cout<<"scalene";
    }
    if (a==b && b!=c || a==c && c!=b || b==c && c!=a)
    {
        cout<<"isoceles";
    }

    
}