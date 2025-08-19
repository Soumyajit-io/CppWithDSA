
#include <iostream>
#include <stack>
using namespace std;
void pushAtButtom(stack<int>& st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }

    int x = st.top();
    st.pop();
    pushAtButtom(st,val);
    st.push(x);
}

void display(stack<int>& st){
    if(st.size()==0) return;

    int x = st.top();
    cout<<x<<" ";
    st.pop();
    display(st);
    st.push(x);
}

int main() {
    stack<int> st; 
    stack<int> temp;// two extra stack
    stack<int> temp2;

    st.push(10);
    st.push(20);
    st.push(30);

    pushAtButtom(st,80);
    display(st);
    
}