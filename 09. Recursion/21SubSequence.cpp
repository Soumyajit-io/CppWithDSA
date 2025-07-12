//print all increasing sub sequence of length K from first n natural numbers

#include<iostream>  
using namespace std;
void PrintSubset(string ans,string original ,int idx,int k){
    if(idx ==original.size()){
        if(ans.size()==k){
            cout<<ans<<endl;
        }
        return;
    }
    
    char ch =original[idx];
    PrintSubset(ans,original,idx+1,k);
    PrintSubset(ans+ch,original,idx+1,k);
}
int main(){
    string str = "12345";
    PrintSubset("",str,0,3);
}