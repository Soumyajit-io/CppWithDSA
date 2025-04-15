//given a sentance ,split every single word of the sentance and print in a new line ̣
#include<iostream>
#include<string>
#include<algorithm>
#include <vector>
#include <sstream>

using namespace std;
int main (){
    string str = "leetcode is my favourite coding platform";
    stringstream ss(str);
    string temp ;
    
    while(ss>>temp){
        cout<<temp<<endl;
    }

    
}