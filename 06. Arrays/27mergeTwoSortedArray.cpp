//Merge two sorted Arrays
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void merge(vector<int>& v1,vector<int>& v2,vector<int>& v3){
    int x=0,y=0,z=0;
    for(int i = 0; i<v1.size()+v2.size();i++){
        
        if(v1[x]<v2[y]){
            v3.push_back(v1[x]);
            x++;
        }
        else if(v1[x]>v2[y]){
            v3.push_back(v2[y]);
            y++;
        }
    }
    for(int i=0;i<v1.size()+v2.size();i++){
        cout<<v3[i]<<" ";

    }

}
int main (){
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(8);
    v1.push_back(28);
    v1.push_back(30);
    v1.push_back(48);
    v1.push_back(70);
    v1.push_back(77);
    v1.push_back(88);
    v1.push_back(91);
    v1.push_back(100);


    vector<int> v2;
    v2.push_back(5);
    v2.push_back(20);
    v2.push_back(43);
    v2.push_back(50);
    v2.push_back(60);
    v2.push_back(89);
    v2.push_back(90);
    

    vector<int> v3;


  
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";

    }
    cout<<endl;
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";

    }
    cout<<endl;
    
    merge(v1,v2,v3);

}