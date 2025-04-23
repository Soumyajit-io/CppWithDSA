#include<iostream>
#include<vector>
using namespace std;
int main(){//2D vectors are vectors of vectors
    
    
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);


    vector<int> v2;
    v2.push_back(4);
    v2.push_back(25);

    vector<int> v3;
    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(3);
    v3.push_back(2);
    v3.push_back(3);


    vector<vector<int> > v;//{{1,2,3},{4,25},{1,2,3,2,3}}
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout<<v[0][1];

    vector<vector<int> >vec(3,vector<int> (4,2));//it has 3 rows and 4 columns and each element is 2
}