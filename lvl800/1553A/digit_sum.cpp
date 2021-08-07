#include <bits/stdc++.h>

#define input std::cin >>
#define print(x) std::cout << x << "\n";


int main()
{
	//formual (n+1)/10, if the number end with 9 the sum of the next will be smaller
	int test_cases;
	input test_cases;
	int n;
	std::vector<int> vect;
	while(test_cases--)
	{
		input n;
		vect.push_back((n+1)/10);
	}
	for(auto k: vect)
	{
		print(k)
	}

}

