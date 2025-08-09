//return how many numbers are greater then a num x
#include<iostream>
using namespace std;

int main (){
    int n,x ;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    for(int i =0; i<=n-1;i++){//input
        cout<<"Enter "<<i+1<<" element ";
        cin>>arr[i];

    }
    cout<<"Enter the Element ";
    cin>>x;
    int count =0;
    for(int i = 0 ; i<=n-1;i++){
        if(arr[i]>x) count++;
    }
    cout<<count;

}
   