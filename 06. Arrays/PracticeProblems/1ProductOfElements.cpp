//product of elemets of array
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
    int p=1;
    for(int i=0;i<n;i++){
        p*=arr[i];
    }
    
    cout<<p;
    
}