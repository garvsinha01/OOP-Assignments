#include <iostream>
using namespace std;

class Book {
    string title;
    string author;
    int price;

public:
    Book() {
        title = "ABC";
        author = "DEF";
        price = 100;
    }

    Book(string t, string a, int p) {
        title = t;
        author = a;
        price = p;
    }

    void display() {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

int main() {
    Book b1;

    Book b2("OOP", "XYZ", 350);

    cout << "Book 1:" << endl;
    b1.display();

    cout << "\nBook 2:" << endl;
    b2.display();

    return 0;
}
