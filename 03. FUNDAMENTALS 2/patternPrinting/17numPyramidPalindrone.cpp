
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j = 1; j<=n-i; j++){
            cout<<" ";
        }
        for (int k = 1; k<=i; k++){//ap nth term formuula
            cout<<k;
        }
        for (int l = i-1; l>0; l--){//ap nth term formuula
            cout<<l;
        }
        
        cout<<endl;

    }

} 