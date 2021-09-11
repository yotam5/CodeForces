// https://codeforces.com/problemset/problem/1511/A
// A review site

#include <bits/stdc++.h>

using namespace std;

int main() {
  int test;
  int reviews_amount;
  int review;
  int serverA = 0;
  int serverB = 0;
  cin >> test;
  while (test--) {
    cin >> reviews_amount;
    while (reviews_amount--) {
      cin >> review;
      switch (review) {
      case 1:
        switch (serverA) {
        case 0:
          ++serverB;
          break;
        default:
          ++serverA;
          break;
        }
        break;
      case 2:
        if (serverA != 0 && serverB != 0) {
          if (serverA > serverB) {
            --serverB;
          } else {
            --serverA;
          }
        }
        break;
      case 3:
        if (serverA > 0) {
          ++serverA;
        } else if (serverB > 0) {
          ++serverB;
        } else if (serverA == 0) {
          ++serverA;
        } else if (serverB == 0) {
          ++serverB;
        }
      }
    }
    cout << (serverA + serverB) << "\n";
    serverA = 0;
    serverB = 0;
  }
}