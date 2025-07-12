//print subsets of a string with Duplicate characters
#include<iostream>  
using namespace std;
void PrintSubset(string ans,string original ,int idx,bool flag){
    if(idx ==original.size()){
        cout<<ans<<endl;
        return;
    }
    
    char ch =original[idx];
    if(original.size()==1){
        if(flag==true) PrintSubset(ans+ch,original,idx+1,true);
        PrintSubset(ans,original,idx+1,true);
    }
    char dh = original[idx+1];
    if(ch==dh){//duplicate
        if(flag==true) PrintSubset(ans+ch,original,idx+1,true);
        PrintSubset(ans,original,idx+1,false);
    }
    else{// no duplicate
        if(flag==true) PrintSubset(ans+ch,original,idx+1,true);
        PrintSubset(ans,original,idx+1,true);
    }
}
int main(){
    string str = "aaabbc";
    PrintSubset("",str,0,true);
}