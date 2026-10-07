#include <iostream>
using namespace std;

class Employee {
private:
   string name;
   int id;

public:
  Employee(string n, int i) {
     name = n;
     id = i;
     cout << "Employee record created" << endl;
  }

  void display() {
    cout << "Employee Name: " << name << endl;
    cout << "Employee ID: " << id << endl;
  }

  ~Employee() {
      cout <<"Employee record removed from memory" << endl;
  }
};

int main() {
  Employee e1("Garv", 32);
  e1.display();
  return 0;
}

  
