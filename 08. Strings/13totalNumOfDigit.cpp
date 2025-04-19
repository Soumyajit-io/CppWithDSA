//Return the total number of digit in a number without using any loop
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    int x = 12345;
    string s = to_string(x);
    cout<<s.size();
}