//https://codeforces.com/problemset/problem/1480/A
//A Yet Another String Game

#include <bits/stdc++.h>


using namespace std;

int main(){
	int t;
	cin >> t;
	string s;
	while(t--){
		cin >> s;
		int strLength = s.length();
		for(int i = 0;i < strLength;i++){
			switch(i%2){
				case 0:
					switch(s[i]){
						case 'a':
						s[i] = 'b';break;
						default:
							s[i] = 'a';break;
					}
					break;
				case 1:
					switch(s[i]){
						case 'z':
						s[i] = 'y';break;
						default:
						s[i] = 'z';break;
					}
					break;
			}
		}
		cout << s << '\n';
	}
}