//Given a sorted integer array and an intreger x, find the lower bound of x.
#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v = {1,2,4,5,9,15,18,21};
    int target = 18;
    int lo=0;
    int hi=v.size()-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid]==target){
            flag = true;
            cout<<v[mid-1];
            break;
        }
        else if(v[mid]>target) hi=mid-1;
        else if(v[mid]<target) lo = mid+1 ;
    }
    if(flag==false) cout<<v[hi];
}