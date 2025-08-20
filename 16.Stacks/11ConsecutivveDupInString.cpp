// remove consecutive dup in string
#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

string removeConsecutiveDuplicates(string s) {
    stack<char> st;
    st.push(s[0]); // Push the first character

    for (int i = 1; i < s.size(); i++) {
        if (s[i] != st.top()) {  // Push only if not same as top
            st.push(s[i]);
        }
    }

    // Build result string from stack
    string result = "";
    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }

    reverse(result.begin(), result.end()); // Reverse to correct order
    return result;
}

int main() {
    string s = "aaabbbcccaaa";
    cout << "Original string: " << s << endl;
    cout << "String after removing consecutive duplicates: " << removeConsecutiveDuplicates(s) << endl;
    return 0;
}
