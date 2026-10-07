#include <iostream>
#include <string>
using namespace std;

class Person {
public:
  string org_name;
  int gst_id;

  void display() {
    cout << "Name of organization: " << org_name << endl;
    cout << "GST ID: " << gst_id << endl;
  }
};

class Employee : public Person {
public:
  string name;
  int id;

  void displayEmployee() {
    cout << "Name of Employee: " << name << endl;
    cout <<"ID Number: " << id << endl;
  }
};

class Manager : public Employee {
public:
  string post;

  void displayManager() {
    cout << "Post: " << post << endl;
  }
};

int main() {
  Manager m1;

  m1.org_name = "TESLA";
  m1.gst_id = 1234;
  m1.name = "Elon";
  m1.id = 5678;
  m1.post = "CEO";

 m1.display();
 m1.displayEmployee();
 m1.displayManager();

 return 0;
}
