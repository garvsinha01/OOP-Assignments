#include <iostream>
#include <string>
using namespace std;

class Book {
private:

   int book_id;
   string name;
   string author;
   string publisher;
   float price;

public:

  void input() {
    cout << "Enter Book ID: ";
    cin >> book_id;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);     // using getline to print first 4 as it was not entering the next line to print.

    cout << "Enter Author: ";
    getline(cin, author);

    cout << "Enter Publisher: ";
    getline(cin, publisher);

    cout << "Enter Price: ";
    cin >> price;
  }

  void display() {
    cout << "\n-----Book Details-----" << endl;
    cout << "Book ID    : " << book_id << endl;
    cout << "Name       : " << name << endl;
    cout << "Author     : " << author << endl;
    cout << " Publisher : " << publisher << endl;
  }
};

int main() {
  Book book;

  cout << "Enter Book Information:- " << endl;
  book.input();

  cout << "Book Staff Viewing the Information.";
  book.display();
  return 0;
}
