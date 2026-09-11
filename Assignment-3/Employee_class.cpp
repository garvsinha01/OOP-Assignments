#include <iostream>
using namespace std;

class Employ {
private:
    string name;
    int id;
    string department;
    float salary;

public:
    void input() {
        name = "Garv";
        id = 32;
        department = "HR";
        salary = 35000;
    }

    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: Rs. " << salary << endl;
    }
};

int main() {
    Employ e;
    e.input();
    e.display();

    return 0;
}

