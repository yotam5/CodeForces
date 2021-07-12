#include <bits/stdc++.h>
#include <cstdio>

//1512A - Spy Detected!

// 1 1 2 1
// 1 1 1 2
using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for(int &e : v)
  {
    cin >> e;
  }
  vector<int> a = v;
  sort(a.begin(),a.end());
  for(int i = 0;i < n;i++) //noice
  {
    (v[i] != a[1]) ? printf("%d\n",i+1) : i+0;
  }
}


int main(void)
{
  int n;
  cin >> n;
  while(n--)
  {
    solve();
  }
  return 0;
}