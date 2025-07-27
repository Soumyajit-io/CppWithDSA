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
 book getMaxPrice(book a,book b){
    if (a.getPrice() > b.getPrice())
        return a;
    else
        return b;
}
int main(){
   book bk;//memory allocate in compile time , static allocation
   book* cs = new book;//memory allocate in run time , dynamic allocation
    // using pointer

    //(*cs).setName("compu");
    //or
    cs->setName("compu");
  
    
    cout<<(*cs).getName();

}  
