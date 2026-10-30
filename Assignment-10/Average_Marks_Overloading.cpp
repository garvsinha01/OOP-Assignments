#include <iostream>
using namespace std;

class Calculate_Average {
public:
  void average(int a, int b) {
    cout << "Average of Two integer: " << (a+b)/ 2 << endl;
  }

  void average(int d, int e, int c) {
    cout << "Average of Three integer: " << (d+e+c)/3 << endl;
  }

  void average(float f, float g) {
    cout << "Average of Two Float: " << (f+g)/2 << endl;
  }
};

int main() {
  cout << "-----Students Result-----" << endl;
  Calculate_Average c;
  c.average(2,4);
  c.average(4,6,8);
  c.average(2.5f,8.5f);
  return 0;
}
