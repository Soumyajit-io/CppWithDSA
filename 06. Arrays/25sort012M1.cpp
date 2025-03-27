//sort the array of 0's, 1's,2's.
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void sort1(vector<int>& v) {
    int noz = 0, noo = 0, nott = 0;

    // Counting occurrences of 0s, 1s, and 2s
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 0) noz++;
        else if (v[i] == 1) noo++;
        else if (v[i] == 2) nott++;
    }

    // Overwriting elements based on count
    for (int i = 0; i < v.size(); i++) {
        if(i<noz) v[i]=0;
        else if (i<(noz+noo)) v[i]=1;
        else v[i]=2;
    }
   

    // Printing sorted array
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main (){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    //sort(v.begin(),v.end());
//m1:using counting
    sort1(v);

}