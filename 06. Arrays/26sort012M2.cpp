//sort the array of 0's, 1's,2's.m2
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void sort2(vector<int>& v){
    int lo=0;
    int md = 0;
    int hg= v.size()-1;//5
    while(md<=hg){
        if(v[md]==2){
            int temp = v[md];
            v[md]=v[hg];
            v[hg]=temp;
            hg--;
        }
        else if(v[md]==0){
            int temp = v[md];
            v[md]=v[lo];
            v[lo]=temp;
            md++;
            lo++;
        }
        else if(v[md]==1){
            md++;
        }
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}


int main (){
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
  
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    sort2(v);
    

}