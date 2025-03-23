#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;//you need not mention the size
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    
    cout<<v.size();
    cout<<endl;
    cout<<v.capacity();
}