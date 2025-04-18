// Input n string and write a program to find the longest common prefix string of all the strings
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