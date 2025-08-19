//with array
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st; 
    

    st.push(10);
    st.push(20);
    st.push(30);

    int i=0;
    int arr[st.size()];
    int n = (sizeof(arr)/sizeof(arr[0])-1);
    while(st.size()>0){//array filling
        arr[i++]=st.top();
        st.pop();

    }

    while(n>=0){//array filling
        st.push(arr[--i]);
        cout<<st.top();
        (n)--;
    }


}