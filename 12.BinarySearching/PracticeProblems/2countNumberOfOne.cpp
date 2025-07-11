//count number of one's
#include<iostream>
#include<vector>

using namespace std;
int first(vector<int>& v){
    int lo =0;
    int hi = v.size()-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid]==1){
            if(v[mid]==v[mid-1]) hi = mid-1;
            else{
                return mid;
                break;
            }
        }
        else{
            lo = mid+1;
        } 
    }
}

int last(vector<int>& v){
    int lo =0;
    int hi = v.size()-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(v[mid]==1){
            if(v[mid]==v[mid+1]) lo = mid+1;
            else{
                return mid;
                break;
            }
        }
        else{
            lo = mid+1;
        } 
    }
}
int main(){
    vector<int> v = {0,0,0,0,1,1,1,1,1,1,1,1,1,1};
    int x = first(v);
    int y = last(v);
    
    cout<<y-x+1;
}