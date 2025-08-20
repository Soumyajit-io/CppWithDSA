class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i=0;
        if(s.size()%2!=0) return false;
        if(s[i]==')' || s[i]==']' || s[i]=='}' ) return false;
        while(s[i]!='\0'){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if (st.empty() || st.top()!='('){
                    return false;
                }
                else{
                    st.pop();
                }
            }
         
            else if(s[i]=='}'){
                if (st.empty() || st.top()!='{'){
                    return false;
                }
                else{
                    st.pop();
                }
            }
         
            else if(s[i]==']'){
                if (st.empty() || st.top()!='['){
                    return false;
                }
                else{
                    st.pop();
                }
            }
            i++;
        }
        if(st.size()==0) return true;
        else return false;
    }
};