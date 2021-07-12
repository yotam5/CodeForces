#include <cstdint>
#include <iostream>

//615A - Bulbs 
using namespace std;
int main(void)
{
    int n, m;
    bool arr[105];
    for(auto &k : arr){
        k = false;
    }
    cin >> n >> m;
    int a, s,i,j; //instead of creating each time will declare once
    for(i = 1; i <= n;i++){
        cin >> a;
        for(j = 1; j <= a;j++){
            cin >> s;
            arr[s] = true;
        }
    }
    bool flag = true;
    for(i = 1; flag && i <= m;i++) //is it optimize tho?
    {
        flag = arr[i];
    }
    std::cout << ( (flag) ? "YES" : "NO" ); //why two ifs if you can do none?

}
