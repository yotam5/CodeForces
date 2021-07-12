
#include <bits/stdc++.h>

using namespace std;

// 	1509A - Average Height

int main(void) {
  int tests,council_number, h;
  bool insert;
  cin >> tests;
  while (tests--) {
    list<int> L1;
    std::cin >> council_number;
    while (council_number--) {
      cin >> h;
      insert = false;
      for (auto x = L1.begin(); x != L1.end() && !insert; ++x) {
        int current = *x;
        float avg = (current + h) / 2.0;
        if (avg     ) {
          L1.insert(x--, h);
          insert = true;
        }
      }
      if (!insert) {
        L1.push_back(h);
      }
    }
    for (auto x = L1.begin(); x != L1.end();
         (x == --L1.end()) ? cout << *x << "\n" : cout << *x << " ", ++x)
      ;
    L1.clear();
  }
}