#include <iostream>
using namespace std;
int main(){
    char character;
    cout<<"enter ur character";
    cin>>character;
    //a to z => 97 to 122
    //A to Z => 65 to 90
    int ASCIIcharacter = (int)character;
    if(ASCIIcharacter>=97 && ASCIIcharacter<=122 || ASCIIcharacter>=65 && ASCIIcharacter<=90){
        cout<<"The charecter is alphabet";
    }
    else{
        cout<<"not";
    }
}