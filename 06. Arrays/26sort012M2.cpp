//sort the array of 0's, 1's,2's.
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void sort2(vector<int>& v){
    int i=0;
    int j = v.size()-1;
    while(i<j){//swap v[i]andv[j]
        if(v[j]==1 ) j--;
        if(v[i]==0) i++;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
    }}
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";}

}


int main (){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    sort2(v);
    

}