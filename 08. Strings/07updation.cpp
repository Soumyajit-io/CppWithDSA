//input a string and upgrade all thr even position in thr string to 'a'
#include<iostream>
#include<string>

using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++){
        if(i%2==0){
            s[i]='a';
        }
    }
    cout<<s;
}