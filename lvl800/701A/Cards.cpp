// codeforces 701A Cards

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool comparator(const pair<int, int> P1, const pair<int, int> P2) {
  return P1.second > P2.second;
}

int main(void) {
  int card_num, i, val;
  std::vector<pair<int, int>> V;
  cin >> card_num;
  for (i = 1; i <= card_num; i++) {
    cin >> val;
    V.push_back(make_pair(i, val));
  }

  sort(V.begin(), V.end(), &comparator);
  for(i = 0,val = card_num-1;i <= val;i++,val--) //max brain cells for this
  {
      std::cout << V[val].first << " " << V[i].first << endl;
  }
}