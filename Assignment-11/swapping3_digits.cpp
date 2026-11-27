#include <iostream>
using namespace std;

template <typename T>
void swapValues(T a, T b) {
    cout <<"Before Swapping: " << a << "," << " " << b << endl;

    T c;
    c = a;
    a = b;
    b = c;

    cout << "After Swpping: " << a << "," << " " << b << endl;
}

int main() {
    cout << "Employee ID: " << endl;
    swapValues(12, 36);
    cout << "Room Numbers: " << endl;
    swapValues(202, 304);
    cout << "Task Priority: " << endl;
    swapValues(2, 1);

    return 0;

}
