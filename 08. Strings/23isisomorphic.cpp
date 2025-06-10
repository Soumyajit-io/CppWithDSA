//a given string is isomorphic or not 
#include<iostream>
#include<string>
#include<algorithm>
#include <vector>
#include <sstream>

using namespace std;

bool isIsmorphic(string s, string t){
    if(s.length()!=t.length()) return false;
    vector<int> v(150,1000);

    //WRT S string
    for(int i=0;i<s.length();i++){
        int idx = (int)s[i];
        if(v[idx]==1000)
            v[idx]=s[i]-t[i];// go to idx and store the differance between the letters (which is umique all the time)
        else if(v[idx]!=(s[i]-t[i])) return false;

    }
    //emptying the vector
    for(int i=0;i<150;i++) v[i] = 1000;


    //WRT to T string

    for(int i=0;i<t.length();i++){
        int idx = (int)s[i];
        if(v[idx]==1000)
            v[idx]=t[i]-s[i];// go to idx and store the differance between the letters (which is umique all the time)
        else if(v[idx]!=(t[i]-s[i])) return false;

    }




    return true;
}
int main (){
    vector<int> v(150,1000);
    string s = "paper",t ="title";
    cout<<isIsmorphic(s,t);
    
}