//input a string of even length greater than 5 and reverse the substring from position 2 to 5 using inbuild fn
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string s;
    cout << "Enter a string of length greater than 5 : ";
    getline(cin, s);
    reverse(s.begin()+1,s.begin()+5);
    cout<<s;
}