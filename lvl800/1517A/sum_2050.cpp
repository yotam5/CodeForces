#include <bits/stdc++.h>

//https://codeforces.com/problemset/problem/1517/A
using namespace std;

int main()
{
	int test;
	cin >> test;
	long long n;
	while(test--)
	{
		cin >> n;
		if(n % 2050 != 0)
		{
			cout << -1 << "\n";
		}
		else
		{
			long long counter = n/2050;
			int c = 0;
			while(counter != 0){
				c+=counter % 10;
				counter /= 10;
			}
			cout << c << "\n";	
		}
	}
}