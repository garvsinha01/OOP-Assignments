#include <iostream>
using namespace std;

template <typename T>

void larger(T a, T b) {
if ( a > b) {
  cout << "Larger Value: " << a  << endl;
}

else {
  cout << "Larger Value:  " << b << endl; 
}
};

int main() {
  int a = 85, b = 90;
  float c = 45.5f, d = 19.8f;
  double e = 23.45f, f = 60.54f;

  larger(a,b);
  larger(c,d);
  larger(e,f);
  return 0;
}
