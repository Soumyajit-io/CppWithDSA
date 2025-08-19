//with a stack
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st; 
    stack<int> temp;// two extra stack
    stack<int> temp2;

    st.push(10);
    st.push(20);
    st.push(30);

    while(st.size()>0){
        int x =st.top();
        st.pop();
        temp.push(x);

    }
    while(temp.size()>0){
        temp2.push(temp.top());
        temp.pop();
        
    }
    while(temp2.size()>0){
        st.push(temp2.top());
        cout<<st.top();//printing
        temp2.pop();
        
    }

    
}