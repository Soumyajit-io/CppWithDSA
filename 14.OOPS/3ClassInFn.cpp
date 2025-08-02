#include<iostream>
using namespace std;
class book{
    private:
    string name;
    int price;

    public:
    void setName(string name){
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
 book getMaxPrice(book a,book b){//pass by value
    if (a.getPrice() > b.getPrice())// use & if u want pass by referance
        return a;
    else
        return b;
}
int main(){
   book bk,ck;
   bk.setName("boo1");
   bk.setPrice(450);

   ck.setName("boo2");
   ck.setPrice(456); 

   book maxBook = getMaxPrice(bk, ck);
   cout << "Book with higher price: " << maxBook.getName() << " - Price: " << maxBook.getPrice() << endl;
   
}  