#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> v;
    int x,b=0;

    for(int i =0;i<=5;i++){//input
        int f;//extra variable
        cin>>f;
        v.push_back(f);
    }
    cout<<"Enter the Element you want to find last occurrence ";
    cin>>x;
    for(int i=0;i<=5;i++){//this is a forward loop ,but for better you can try backward loop. 
        if(v[i]==x){
            b=i;
        }
    }
    cout<<b;
    
}