//find all the permutations of an string given all elements of the string are unique

#include<iostream>  
#include<string>
#include<vector>
using namespace std;
void PrintSubset(string ans,string original ){
    if(original ==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.size();i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        PrintSubset(ans+ch,left+right);

    }
    
}
int main(){
    string str = "abcd";
    PrintSubset("",str);
}