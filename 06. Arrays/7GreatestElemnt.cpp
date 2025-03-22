#include<iostream>
using namespace std;

int main (){
    int n ;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    for(int i =0; i<=n-1;i++){//input
        cout<<"Enter "<<i+1<<" element ";
        cin>>arr[i];

    }

    int max = arr[0];
    for(int i = 1 ;i<=n-1 ; i++){
        if (max<arr[i]) max=arr[i];
    }
    cout<<"The element is "<<max;
}
    