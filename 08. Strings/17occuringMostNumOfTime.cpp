//given a string consisting of lowercase english alphabets print the charecter that is occuring most number of times
#include<iostream>
#include<string>
#include<algorithm>
#include <vector>
using namespace std;
int main (){
    string s ;
    cin>>s;
    vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){//travelling in the string
        char ch = s[i];//converting to charecter
        int ascii = (int)ch;// getting the ascii value
        arr[ascii-97]++;//indexing the array
    }
    int max =0;
    for(int i =0;i<26;i++){// loop to find the maximum occuring charecter
        if(arr[i]>max) max = arr[i];

    }
    for(int i=0;i<26;i++){//loop to print thr occuring charecter
        if(arr[i]==max){
            int ascii = i+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<max<<endl;
        }
    }
}