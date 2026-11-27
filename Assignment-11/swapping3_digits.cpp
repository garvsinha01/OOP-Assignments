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
    swapValues(12, 36);
    swapValues(202, 304);
    swapValues(2, 1);

    return 0;

}
