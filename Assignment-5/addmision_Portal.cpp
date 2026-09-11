#include <iostream>
using namespace std;

class Student {
    string name;
    int rollno;
    int age;
    string course;

public:
    Student(string name, int rollno, int age, string course) {
        this->name = name;
        this->rollno = rollno;
        this->age = age;
        this->course = course;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "RollNo: " << rollno << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s("Garv", 32, 18, "CSE-AIML");

    s.display();

    return 0;
}
