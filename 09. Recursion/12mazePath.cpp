//maze path
#include<iostream>
using namespace std;
int maze(int sr,int sc, int er , int ec){//sr,sc= staring row/column
    if(sr>er || sc>ec) return 0;     //er,ec = ending row/column
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    return rightWays + downways;
    
}
int main (){
    cout<<maze(1,1,5,5);
}