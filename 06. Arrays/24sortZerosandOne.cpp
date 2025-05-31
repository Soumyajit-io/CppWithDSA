//sort the array of 0's and 1's.
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void sort1(vector<int>& v){
    int noz =0 , noo =0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) noz++;//counting the elements
        else noo++;

    }
    for(int i=0;i<noz-1;i++){
        v[i]=0;//overwriting the elemts with 0
    }
    for(int i=noz;i<v.size();i++){
        v[i]=1;//overwriting the elemts with 1

    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
}

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
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    //sort(v.begin(),v.end());
//m1:using counting
 //   sort1(v);
//m2:using two pointer
    sort2(v);
    

}