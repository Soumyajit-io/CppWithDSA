//given a sentance , return the word that is occuring most number of times in that sentance.

#include<iostream>
#include<string>
#include<algorithm>
#include <vector>
#include <sstream>

using namespace std;
int main (){
    vector<string> v;
    string str = "leetcode is my favourite coding platform.It is is is  the most popular platform";
    stringstream ss(str);
    string temp ;
    
    while(ss>>temp){
        v.push_back(temp);
    }
    
    sort(v.begin(),v.end());


    int maxcount = 1;
    int count =1 ;

    for (int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count ++;
        else count = 1;
        maxcount = max(maxcount,count);
    }
    count =1;
    for (int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count ++;
        else count = 1;
        if(count==maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }    
}