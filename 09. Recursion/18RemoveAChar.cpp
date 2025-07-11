//remove a charecter from a string using recursion
#include<iostream>  
using namespace std;
// void removeChar(string ans,string original){
//     if(original.size()==0){
//         cout<<ans;
//         return;
//     }
//     char ch =original[0];
//     if(ch=='a') removeChar(ans,original.substr(1));
//     else removeChar(ans+ch,original.substr(1));
// }

void removeChar(string ans,string original ,int idx){
    if(idx ==original.size()){
        cout<<ans;
        return;
    }
    char ch =original[idx];
    if(ch=='a') removeChar(ans,original,++idx);
    else removeChar(ans+ch,original,++idx);
}
int main(){
    string str = "Soumyajit Sadhukhan";
    removeChar("",str,0);
}