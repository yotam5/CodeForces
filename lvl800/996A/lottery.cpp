#include <iostream>

using namespace std;


int main(void){
	long amount;
	cin >> amount;

	long bill_count = 0;

	while(amount){
		if(amount >= 100){
			amount-=100;
		}
		else if(amount >=20){
			amount-=20;
		}
		else if(amount >=10){
			amount-=10;
		}
		else if(amount >= 5){
			amount -= 5;
		}
		else{
			amount -= 1;
		}
		++bill_count;
	}
	cout << bill_count;
}