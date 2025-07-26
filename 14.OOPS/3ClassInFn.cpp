#include<iostream>
using namespace std;
class book{
    public:
    string name;
    int price;
    
    void setName(str name){
        this->name=name;
    }
    void setPrice(int price){
        this->price=price;
    }
    int getPrice(){
        return price;
    }
    
    string getName(){
        return name;
    }
    

};

int addPrice(book a,book b){
    return a.price+b.price;
}
int main(){
   book bk , ck;
   bk.name="boooo1";
   bk.price=450;
   

   ck.name="boooo2";
   ck.price=450;
  

   cout<<addPrice(bk,ck);
   
   
}  