//find the next permutation of Array
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void display(vector<int>& v){                      
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void nextpermutation(vector<int>& v1){
    //STEP 1---------------------
    int n=v1.size();
    int idx =-1;
    for(int i=n-2; i>=0; i--){// to find the pivot index
        if(v1[i]<v1[i+1]){
            idx =i;
            break;
        }        
    }
    if(idx==-1){
        reverse(v1.begin(),v1.end());
    }
    //STEP 2 -------------------
    reverse(v1.begin()+idx+1,v1.end());

    //STEP 3----------------
    //finding just greater number of idx
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(v1[i]>v1[idx]){
            j=i;
            break;
        }
    }


    //STEP4  --------------------
    int temp = v1[idx];
    v1[idx] =v1[j];
    v1[j]=temp;



};


int main (){
    vector<int> v1 = {1,3,5,2};
    nextpermutation(v1);
    display(v1);
}
