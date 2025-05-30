//dup elemets of array or not
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
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]) {
                cout<<" Dup Found";
                break;
            }
        }
    }

}