#include <iostream>
using namespace std;

template <typename T>

void larger(T a, T b) {
if ( a > b ) {
  cout << "a is greater than b"  << endl;
}

else {
  cout << "b is greater than a"  << endl; 
}
};

int main() {

  larger(89,56);
  larger(67.67,96.96);
  larger(33.66,89.99);
  return 0;
}
