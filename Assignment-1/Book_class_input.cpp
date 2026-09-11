#include <iostream>
using namespace std;

class Book {
    string title;
    string author;
    int price;

public:
    Book(string t, string a, int p) {
        title = t;
        author = a;
        price = p;
    }

    void input() {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

int main() {
    Book b("OOP", "XYZ", 350);

    b.input();

    return 0;
}
