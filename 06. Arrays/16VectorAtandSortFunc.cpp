#include<iostream>
#include<vector>
#include<algorithm> //for sort function
using namespace std;
int main(){
    vector<int> v;//you need not mention the size
    v.push_back(6);
    v.push_back(1);
    v.push_back(6);
    v.push_back(7);




    cout<<v[2];


    cout<<v.at(2);//At Function

    v.at(2)=60;//modification with AT Function
    cout<<v.at(2);


    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    //sort function
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}