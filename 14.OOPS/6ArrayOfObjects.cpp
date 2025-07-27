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
   book academic[3];
   academic[0].setName("ComputerScience");
   cout<<academic[0].getName();
} 