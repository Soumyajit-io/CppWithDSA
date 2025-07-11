//print subsets of a string with unique characters
#include<iostream>  
using namespace std;
void PrintSubset(string ans,string original ,int idx){
    if(idx ==original.size()){
        cout<<ans<<endl;
        return;
    }
    
    char ch =original[idx];
    PrintSubset(ans,original,idx+1);
    PrintSubset(ans+ch,original,idx+1);
}
int main(){
    string str = "abc";
    PrintSubset("",str,0);
}