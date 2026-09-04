#include <iostream>
#include <string>
using namespace std;

class Books {
public:
  int book_id;
  string book_name;
  float book_price;

  void display() {
    cout << "Book ID: " << book_id << endl;
    cout << "Book Name: " << book_name << endl;
    cout << "Book Price: " << book_price;
  }
};

int main() {
  cout <<"=====BOOK LIBRARY SYSTEM=====" << endl;

  Books b1;

  b1.book_id = 167;
  b1.book_name = "OOP Basics";
  b1.book_price = 245.50;

  b1.display();
  return 0;
}
