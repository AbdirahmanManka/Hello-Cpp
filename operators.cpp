// operators in c++
// +, -, *, /, %, ++, --
#include <iostream>
using namespace std;
int main() {
  int x = 100 + 50;
  cout << x << endl;
  int sum1 = 100 + 50;        // 150 (100 + 50)
  int sum2 = sum1 + 250;      // 400 (150 + 250)
  int sum3 = sum2 + sum2;     // 800 (400 + 400)
  cout << sum1 << endl;
  cout << sum2 << endl;
  cout << sum3 << endl;
  int x1 = 10;
  int y1 = 9;
  cout << x1 - y1 << endl; // Outputs 1 (10 - 9)
  int x2 = 10;
  x2 += 5;
  cout << x2 << endl;
  int x3 = 10;
  x3 -= 5;
  cout << x3 << endl;
  int x4 = 10;
  x4 *= 5;
  cout << x4 << endl;
  int x5 = 10;
  x5 /= 5;
  cout << x5 << endl;
  int x6 = 10;
  x6 %= 5;
  cout << x6 << endl;
  int x7 = 10;
  x7 &= 5;
  cout << x7 << endl;
  int x8 = 10;
  x8 |= 5;
  cout << x8 << endl;
  int x9 = 10;
  x9 ^= 5;
  cout << x9 << endl;
  int x10 = 10;
  x10 >>= 5;
  cout << x10 << endl;
  int x11 = 10;
  x11 <<= 5;
  cout << x11 << endl;
  int x12 = 5;
  cout << x12++ << endl;
  cout << x12 << endl;
  int x13 = 5;
  cout << ++x13 << endl;
  cout << x13 << endl;
  int x14 = 5;
  cout << x14-- << endl;
  cout << x14 << endl;
  int x15 = 5;
  cout << --x15 << endl;
  cout << x15 << endl;
  int x16 = 100;
  int y16 = 50;
  if (x16 == y16) {
    cout << "x16 is equal to y16" << endl;
  }

}