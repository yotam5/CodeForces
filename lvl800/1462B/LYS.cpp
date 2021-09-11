// https://codeforces.com/problemset/problem/1462/B
// B. Last Year's Substring

#include <bits/stdc++.h>
#include <iterator>

using namespace std;

#define PRINT(X) cout << X << "\n";

int main() {
  int tests;
  cin >> tests;
  int strLength;
  string ss;
  while (tests--) {
    cin >> strLength;
    cin >> ss;
    bool solved = false;
    if(ss.compare(0,4,"2020") == 0){
    	PRINT("YES");continue;
    }
    if(strLength > 4 && ss.compare(strLength - 4,4,"2020") == 0){
    	PRINT("YES");continue;
    }
    for(int i = 1; i < 5 && !solved;i++){
    	string tmp1 = "";
    	for(int k = 0; k < i;k++){
    		tmp1+=ss[k];
    	}

    	for(int k = strLength - (4 - i); k < strLength;k++){
    		tmp1 += ss[k];
    	}
    	
    	if(tmp1 == "2020"){
    		solved = true;
    	}
    }
    PRINT((solved ? "YES" : "NO"));
  }
}