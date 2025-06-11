#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v = {1,2,4,5,9,15,18,21};
    int target = 18;
    int lo=0;
    int hi=v.size()-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid]==target){
            cout<<mid;
            break;
        }
        else if(v[mid]>target) hi=mid-1;
        else if(v[mid]<target) lo = mid+1;
    }
}