#include<iostream>
using namespace std;
int maze(int sr,int sc, int er , int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er || sc==ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    int totalways = rightWays + downways;
    return totalways;
}
int main (){
    cout<<maze(1,1,5,5);
}