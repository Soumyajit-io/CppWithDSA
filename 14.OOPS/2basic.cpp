#include<iostream>
using namespace std;
class book{
    public:
    string name;
    int price;
    int pages;

    
    int countBooks(int p){
        if(price<p) return 1;
        else return 0;
    }
    bool isBookPresent(string b){
        if(name==b ) return true;
        else return false;
    }

};
int main(){
   book bk;
   bk.name="boooo1";
   bk.price=450;
   bk.pages=100;

   cout<<bk.countBooks(500);
   cout<<bk.isBookPresent("boooo1");
   
   
}  