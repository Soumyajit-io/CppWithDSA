#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v = {1,2,3,3,4,4,4,5};
    int target = 4;
    int lo=0;
    int hi=v.size()-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid]==target){
            if(v[mid]==v[mid+1]) lo = mid+1;
            else {
                cout<<mid;
                break;
            }
        }
        else if(v[mid]>target) hi=mid-1;
        else if(v[mid]<target) lo = mid+1;
    }
}