//https://codeforces.com/problemset/problem/1542/A
//A. Odd Set


#include <bits/stdc++.h>

using namespace std;

int main(void){
	int tests;
	cin >> tests;

	while(tests--){
		int pairs;
		cin >> pairs;
		pairs *= 2;
		int balance = 0;
		while(pairs--){
			int num;
			cin >> num;
			(num % 2 == 0) ? ++balance : --balance;
		}
		(balance == 0) ? cout << "YES" : cout << "NO";
		cout << "\n";
	}
}