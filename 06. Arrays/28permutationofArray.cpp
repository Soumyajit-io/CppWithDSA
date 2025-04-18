//find the next permutation of Array
#include<iostream>
#include<vector>
using namespace std;
void nextpermutation(vector<int>& v1){
    int n=v1.size();
    int i=n-2;
    int j=n-1;
    int p=0;
    for(int x=0; x<=v1.size()-2; x++){
        if(v1[j]>v1[i]){
            p=j;
            
        }
        cout<<p;
    }



};


int main (){
    vector<int> v1 = {1,4,2,3};
    nextpermutation(v1);
}
