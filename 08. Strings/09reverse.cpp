//input a string of even length and reverse the first half of the string 
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    string s;
    cout << "Enter a string of even length: ";
    getline(cin, s);

    int length = s.size()/2-1;
    
    reverse(s.begin()+0, s.begin()+length+1 ); // reverse the first half of the string
    cout << "Reversed first half: " << s << endl;

    return 0;
}