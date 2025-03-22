#include<iostream>
using namespace std;
//******************fn to cal factorial********************* */
int fact(int x){
    int f = 1;
    for(int i = 2;i<=x;i++){
        f*=i;
    }
    return f;
}

int combination(int n , int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int Permutation(int n , int r){
    int ncr = fact(n)/fact(n-r);
    return ncr;
}
int main(){

    int n,r;
    cin>>n>>r;
    // int nfact = fact(n);
    // int rfact = fact(r);
    // int nrfact = fact(n-r);
    // int ncr = nfact/(rfact*nrfact);
    int ncr = combination(n,r);
    int npr = Permutation(n,r);
    cout<<ncr<<endl;
    cout<<npr;


}
