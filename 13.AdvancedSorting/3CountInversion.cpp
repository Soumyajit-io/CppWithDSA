//two elements of an array a, a[i]and a[j] form an inversion if
//a[i]>a[j] and i<j . given an array of intreger .
//find the inversion count in the array.

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& d){
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
}
void merge (vector<int>& a ,vector<int>& b , vector<int>& res ){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res[k] =a[i];
            k++;
            i++;
        }
        else{
            res[k] =b[j];
            k++;
            j++;
        }
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k] =b[j];
            k++;
            j++;
        }
    }
    else if(j==b.size()){
        while(i<a.size()){
            res[k] =a[i];
            k++;
            i++;
        }
    }
}
void mergesort(vector<int>& a){
    
    int n = a.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n-n/2;

    vector<int> v1(n1);
    vector<int> v2(n2);
    for(int i =0;i<v1.size();i++){
        v1[i]= a[i];
    }
    for(int i =0;i<v1.size();i++){
        v2[i]= a[i+n1];
    }
    mergesort(v1);
    mergesort(v2);
    merge(v1,v2,a);
    
}
int main(){
    int arr1[]={1,2,89,8,9};
    int arr2[]={2,6,89,75,16,78,26,78,5,89};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    vector<int> v1(arr1,arr1+n1);
    vector<int> v2(arr2,arr2+n2);
    vector<int> res(v1.size() + v2.size());
    mergesort(v1);
    mergesort(v2);
    merge(v1,v2,res);
    display(res);
}