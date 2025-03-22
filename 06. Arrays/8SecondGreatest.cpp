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
    for(int i = 0 ;i<=n-1 ; i++){
        if (max<arr[i]) max=arr[i];
    }

    int smax = arr[0];
    for(int i = 0 ;i<=n-1 ; i++){
        if (max!=arr[i] && smax<arr[i]) smax=arr[i];
    }


    cout<<"The first largest element is "<<max<<endl;
    cout<<"The Second largest element is "<<smax;
}
   