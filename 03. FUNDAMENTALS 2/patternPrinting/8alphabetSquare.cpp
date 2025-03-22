
#include<iostream>
using namespace std;
//a to z => 97 to 122
//A to Z => 65 to 90
int main(){
    int n;
    char d;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j = 65; j<=n+64; j++)
        {
            d = (char)j;
            cout<<d;
        }
        cout<<endl;

    }

} 