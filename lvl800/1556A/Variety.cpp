// https://codeforces.com/problemset/problem/1556/A

#include <iostream>

using namespace std;

int main(void) {

  long tests;
  cin >> tests;

  long a;    // a->c
  long b;    // b->d
  long c, d; // 5,3
  while (tests--) {
    cin >> c >> d;
    long delta = abs(c - d);
    if (c == 0 && d == 0) {
      cout << "0\n";
    }

    else if (c == d) {
      cout << "1\n";
    } else if (delta % 2 == 1) {
      cout << "-1\n";
    } else {
      cout << "2\n";
    }
  }
}