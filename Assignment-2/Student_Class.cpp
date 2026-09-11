#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string rollno;
    string course;
    float marks;

public:
    void input() {
        name = "Garv Sinha);
        rollno = 32;
        course = "CSE-AIML";
        marks = 89.5;
    }

    void display() {
        cout << "Name : " << name << endl;
        cout << "Roll No   : " << rollno << endl;
        cout << "Course  : " << course << endl;
        cout << "Marks   : " << marks << endl;
    }
};

int main()
{
    Student s;
    s.input();
    s.display();

    return 0;
}
