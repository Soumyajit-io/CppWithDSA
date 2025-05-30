//wap to find smallest mising element in a sorted array
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
    int min=arr[0];
    for(int i=0;i<n;i++){
        
        if(arr[i]!=i+1) {
            cout<<i+1;
            break;
            
        }
        
    }

}