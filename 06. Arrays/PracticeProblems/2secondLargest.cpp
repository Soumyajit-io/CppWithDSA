//second largest elemets of array
 #include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter size";
    cin>>n;
    int arr[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max) max =arr[i];
    }
    int smax=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>smax && arr[i]!=max) smax =arr[i];
    }
    cout<<smax;
    
}