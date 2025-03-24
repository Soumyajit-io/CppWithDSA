#include<iostream>
using namespace std;

int main (){
    int n , x;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    for(int i =0; i<=n-1;i++){//input
        cout<<"Enter "<<i+1<<" element";
        cin>>arr[i];
    }
    cout<<"Enter the Element you want to search";
    cin>>x;
    bool flag = false;
    for(int i =0; i<=n-1;i++){//search
        if(arr[i]==x) flag = true;
    
     
    }
    if (flag==true) cout<<"Present sir!!";
    else cout<<"Absent sir!!";
}