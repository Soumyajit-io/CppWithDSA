//given n string consisting of digit from 0 to 9 . Return the index of string which has maximum value 
#include<iostream>
#include<string>
#include<algorithm>
#include <vector>
#include <sstream>

using namespace std;
int main (){
    string arr[] = {"40","096","0047","00056","5000","000057600"};
    int max = stoi(arr[0]);
    string maxS = arr[0];
    for(int i =1;i<=5;i++){
        if(stoi(arr[i])>max){
            max = stoi(arr[i]);
            maxS = arr[i];
        }
    }
    cout<<max<<" "<<maxS;
}