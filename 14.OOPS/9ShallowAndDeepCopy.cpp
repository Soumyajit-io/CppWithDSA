#include <iostream>
#include <cstring>
using namespace std;

class Book {
private:
    char* name;

public:
    // ✅ Constructor
    Book(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // ✅ Copy Constructor (Deep Copy)
    /*
    A copy constructor is a special constructor used to copy an object.
    Deep copy creates a new copy of the memory (not just the pointer),
    so both objects work independently.
    */
    // Book(const Book& other) {
    //     name = new char[strlen(other.name) + 1];  // allocate new memory
    //     strcpy(name, other.name);                 // copy content
    //     cout << "Deep copy constructor called.\n";
    // }

    // ❌ Shallow Copy Example (Uncomment this to try)
    
    // Shallow copy only copies the pointer. So, both objects share the same memory.
    // If one is modified, the other also changes. Can lead to double delete issue.
    
    Book(const Book& other) {
        name = other.name;  // Just copy the pointer (not safe)
        cout << "Shallow copy constructor called.\n";
    }
    

    // ✅ Display Function
    void show() {
        cout << "Book Name: " << name << endl;
    }

    // ✅ Change the name
    void changeName(const char* newName) {
        strcpy(name, newName);
    }

    // ✅ Destructor
    ~Book() {
        delete[] name;
    }
};

int main() {
    Book b1("C++ Basics");   // Normal constructor
    Book b2 =b1;            // Copy constructor is called (deep copy)

    b1.changeName("Java");   // Change name of b1

    // Show results
    cout << "b1 -> ";
    b1.show();

    cout << "b2 -> ";
    b2.show();  // Should remain "C++ Basics" if deep copy is done

    return 0;
}
