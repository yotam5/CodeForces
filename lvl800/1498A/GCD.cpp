#include <algorithm>
#include <iostream>
#include <string>
#include <bits/stdc++.h>

// gcd_sum 1498A

int main(void) {
    long long int t;
    std::cin >> t;
    while(t--)
    {
        long long int x,n,p;
        std::cin >> n;
        while(true)
        {
            x = n;
            long long int sum = 0;
            while(x>0)
            {
                p=x%10;
                sum+=p;
                x/=10;
            }
            if(std::__gcd(n,sum) > 1)
            {
                std::cout << n << std::endl;
                break;
            }
            n++;
        }
    }
}
