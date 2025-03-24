#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,7);//initial size = 5 and each element is 7
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    
    for (int i =0 ; i<=4;i++){
        cout<<v[i];
    }
}