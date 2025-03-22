
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int z=1;z<=2*n-1;z++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        for (int j = 1; j<=n-i; j++){
            cout<<"*";
        }
        for (int k = 1; k<=2*i-1; k++){//ap nth term formuula
            cout<<" ";
        }
        for (int l = 1; l<=n-i; l++){
            cout<<"*";
        }
        
        cout<<endl;

    }

} 