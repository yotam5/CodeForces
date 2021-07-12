#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int times, leng;
  string str;
  cin >> times;
  while (times--) {
    cin >> leng;
    cin >> str;
    std::reverse(str.begin(), str.end());
    int counterA = 0;
    int counterB = 0;
    bool state = true;
    for(auto c : str)
    {
        if(c!=')')
        {
            state = false;
        }
        if(state){counterA++;}
        if(!state){counterB++;}
    }
    printf("%s\n",(counterA > counterB) ? "YES" : "NO");
  }
}