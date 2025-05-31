//merge two sorted array
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    //                        
    
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
vector<int> merge(vector<int>& v1,vector<int>& v2){
    int n =v1.size();
    int m =v2.size();
    vector<int> v3(m+n);
    int i=0;//v1
    int j=0;//v2
    int k=0;//res
    while(i<n && j<m){
        if(v2[j]>=v1[i]){
            v3[k]=v1[i];
            i++;
            
        }
        else if(v1[i]>v2[j]){
            v3[k]=v2[j];
            j++;
        }
        k++;
        
    }
    //for remaining
    if(i==n){
            while(j<m){
                v3[k]=v2[j];
                k++;
                j++;
            }
    }
    else if(j==m){
            while(i<n){
                v3[k]=v1[i];
                k++;
                i++;
            }
    }
    return v3;
}
int main(){
    vector<int> v1;
    vector<int> v2;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(8);
    
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);

    
    vector<int> v3 = merge(v1,v2);
    display(v3);
}