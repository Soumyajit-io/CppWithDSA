//GIven two strings s and t , return true if t ia an anagram of s, and false otherwise,
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdlib>

using namespace std;
int main (){
    bool flag =false;
    string a,b;
    cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a.size()!=b.size()){
        cout<<"invalid string";
        
    }
    else {
        for(int i=0; i<a.size();i++){
            if(a==b){
            flag = true;
            }   
        }
        cout<<flag;
    }
    
}