//Find the Doublet in the array whse sum is equal to the given value x.
#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> v;
    int x,b=0;

    for(int i =0;i<=5;i++){//input
        int f;//extra variable
        cout<<"Enter "<<i<<"th index element :";
        cin>>f;
        v.push_back(f);
    }
    cout<<"Enter the Element you want to find whose sum is equal to the element ";
    cin>>x;
    //method 1   
    for(int i =0;i<=5;i++){
        for(int j =i+1;j<=5;j++){
            if(v[i]+v[j]==x) cout<<"The doublet indexs are :"<<i<<","<<j<<endl;
        }
    }


}
