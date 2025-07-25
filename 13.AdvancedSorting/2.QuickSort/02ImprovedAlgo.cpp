#include<iostream>
using namespace std;

int partition(int arr[],int si,int ei){
    int pivotElement = arr[(si+ei)/2];//
    int count =0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;//
        if(arr[i]<=pivotElement){
            count++;

        }
    }
    int pivotIDx = count + si;
    swap(arr[si],arr[pivotIDx]);
    int i=si;
    int j = ei;
    while(i<pivotIDx && j>pivotIDx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIDx;
}

void QuickSort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pivotIdx = partition(arr,si,ei);
    //3,1,4,2,5,6,7
    
    QuickSort(arr,si,pivotIdx-1);
    QuickSort(arr,pivotIdx+1,ei);

}
int main (){
int arr[] = {5, 1, 1, 1, 1, 1, 1, 1, 1, 100};


    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    QuickSort(arr,0,n-1);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}

