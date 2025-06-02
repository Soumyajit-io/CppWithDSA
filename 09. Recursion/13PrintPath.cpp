//print the maze paths
#include<iostream>
using namespace std;

void printpath(int sr,int sc, int er , int ec,string s){
    if(sr>er || sc>ec) return ;     
    if(sr==er && sc==ec){//destination reached
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+"R");//right
    printpath(sr+1,sc,er,ec,s+"D");//down
    
}
int main (){
    
    printpath(1,1,5,5,"");
}