#include <iostream>
using namespace std;

class Calculate_Bill {
public:
  void product(float a, float b) {
    cout << "Bill of Two Product: " << (a+b) << endl;
  }

  void product(float d, float e, float c) {
    cout << "Bill of Three Product: " << (d+e+c) << endl;
  }

  void product(float f, float g, float h, float i) {
    cout << "Bill of Four Product: " << (f+g+h+i) << endl;
  }
};

int main() {
  cout << "-----Total Price-----" << endl;
  Calculate_Bill c;
  c.product(215.5f,49.2f);
  c.product(499,65.9f,8);
  c.product(299.5f,85.5f);
  return 0;
}
