#include <bits/stdc++.h>

//https://codeforces.com/problemset/problem/1367/B
using namespace std;
int main()
{
	int test;
	cin >> test;

	vector<int> vect; 	
	while(test--)
	{
		int amount;
		cin >> amount;
		int c = amount;
		while(amount--)
		{
			int n;
			cin >> n;
			vect.push_back(n);
		}
		amount = c;
		int cnt1 = 0;
		int cnt2 = 0;
		for(int i = 0; i < amount;i++)
		{
			std::cout << vect[i] << " ";
			if(i % 2 == 0)
			{
				if(vect[i] % 2 == 0){
										std::cout << vect[i];

					cnt1++;
				}
			}
			else {
				if(vect[i] % 2 == 1){
					std::cout << vect[i];
					cnt2++;
				}
			}
		}
		if(cnt1 != cnt2){
			cout << -1 << "\n";
		}
		else {
			cout << cnt1 << "\n";
		}
		vect.clear();
	}
}