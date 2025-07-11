#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v = {0,1,2,3,5,6,7};
    
    int lo=0;
    int hi=v.size()-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(mid==v[mid]){
            lo = mid+1;
        }
        else if(v[mid]!=mid){
            if(mid-1==v[mid-1]){
                cout<<mid;
                break;
            }
            else{
                hi=mid-1;
            }
        }
    }
    
}