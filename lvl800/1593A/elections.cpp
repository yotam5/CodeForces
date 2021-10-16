
#include <iostream>
#include <algorithm>
//https://codeforces.com/problemset/problem/1593/A
using namespace std;
int main(){
	long tests;
	long a,b,c,delta;
	auto kk = {&a,&b,&c};
	cin >> tests;
	while(tests--){
		cin >> a >> b >> c;
		long m = max(max(a,b),c);
		int c = 0;
		for(auto n : kk){
			if(*n == m){++c;}
		}
		for(auto n : kk){
			delta = m - *n;
			if(delta!=0 || m == 0 || c != 1 ){++delta;}
			std::cout << delta << " ";
		}
		cin.get();
		std::cout << "\n";

	}
}