#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i =0;i<=5;i++){//input
        int f;//extra variable
        cin>>f;
        v.push_back(f);
    }
    for (int i =0 ; i<=5;i++){//printing
        cout<<v[i];
    }
}