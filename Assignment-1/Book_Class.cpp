#include <iostream>
#include <string>
using namespace std;

class Books {
private:
  int book_id;
  string book_name;
  float book_price;

public:
  void setData(int id, string name, float price) {
    book_id = id;
    book_name = name;
    book_price = price;
  }

  void display() {
    cout << "Book ID: " << book_id << endl;
    cout << "Book Name: " << book_name << endl;
    cout << "Book Price: " << book_price;
  }
};

int main() {
  cout << "-----BOOK LIBRARY SYSTEM-----" << endl;

  Books b1;

  b1.setData(167, "OOP Basics", 245.50);

  b1.display();

  return 0;
}
