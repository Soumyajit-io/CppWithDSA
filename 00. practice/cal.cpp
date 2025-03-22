#include<iostream>
using namespace std;
int main(){
    int a,b,x,y;
    char op ;

    cout<<"Enter first Number :";
    cin>>a;
    cout<<"Enter operator :";
    cin>>op;
    cout<<"Enter Second Number :";
    cin>>b;
    if(op=='+') 
    {
        x=a+b;
        cout<<"The result is : "<<x<<endl;

    }

    if(op=='-') 
    {
        x=a-b;
        cout<<"The result is : "<<x<<endl;
    }

    if(op=='*') 
    {
        x=a*b;
        cout<<"The result is : "<<x<<endl;
    }

    if(op=='/') 
    {
        x=a/b;
        cout<<"The result is : "<<x<<endl;
    }

    cout<<"Press 1 to Continue"<<endl;
    cout<<"Press 2 to Clear"<<endl;
    cin>>y;
    while (y==1)
    {
        cout<<"Enter operator :"<<endl;
        cin>>op;
        cout<<"Enter Second Number :"<<endl;
        cin>>b;

        if(op=='+') 
        {
            x=x+b;
            cout<<"The result is : "<<x<<endl;
        }

        if(op=='-') 
            {
            x=x-b;
            cout<<"The result is : "<<x<<endl;
        }

        if(op=='*') 
            {
            x=x*b;
            cout<<"The result is : "<<x<<endl;
        }

        if(op=='/') 
        {
            x=x/b;
            cout<<"The result is : "<<x<<endl;
        }
        cout<<"Press 1 to Continue"<<endl;
        cout<<"Press 2 to Clear"<<endl;
        cin>>y;

    }
    cout<<"Cleared Successfully";
    
    


}