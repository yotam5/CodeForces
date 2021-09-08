#include <bits/stdc++.h>


int main(){
	int limak, bob;
	std::cin >> limak;
	std::cin >> bob;
	int i = 0;
	while(limak <= bob){
		limak *= 3;
		bob *= 2;
		++i;
	}
	std::cout << i;
}