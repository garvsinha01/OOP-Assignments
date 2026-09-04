#include <iostream>
#include <string>
using namespace std;

class Employee {

private:

  int Employee_ID;
  string name;
  string department;
  string role;
  float salary;

public:

   void input() {                       //This is a function to input employee details.
     cout << "Enter Employee ID: ";
     cin >> Employee_ID;

     cin.ignore();                     // usi9ng this or the outoput as for example becomes in such a way that there is no next line after "Enetr Name:".

     cout << "Enter Employee Name: ";   
     getline(cin, name);                // I am using getline instead of cin as cin only prints the first word.

     cout << "Enter Department: ";
     getline(cin, department);

     cout << "Enter Role: ";
     getline(cin, role);

     cout << "Enter Salary: ";
     cin >> salary;

   }

   void display() {                   // This will display the employee details.
      cout << "\n-----Employee Details-----" << endl;
      cout << "Employee ID    : "  << Employee_ID << endl;
      cout << "Name           : "  << name << endl;
      cout << "Department     : "  << department << endl;
      cout << "Salary         : "  << salary << endl;
   }
};

int main() {
   Employee emp;                      // emp is the object of the Employee class.

  cout << "Enter Employee Information\n";
  emp.input();

  cout << "\nAuthorized Staff - Viewing Employee Information";
  emp.display();

  return 0;
}
