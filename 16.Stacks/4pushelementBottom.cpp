#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    stack<int> temp;

    st.push(10);
    st.push(20);
    st.push(30);

    while(st.size()>0){
        int x =st.top();
        st.pop();
        temp.push(x);

    }
    st.push(70);
    while(temp.size()>0){

        int x =temp.top();
        temp.pop();
        st.push(x);
        
    }

    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
        
    }
    
}