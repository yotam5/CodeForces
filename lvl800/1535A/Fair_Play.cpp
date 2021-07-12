#include <algorithm>
#include <iostream>

//1535A - Fair Playoff 

#define max(a, b) std::max(a, b)

int main(void) {
  int amount;
  scanf("%d", &amount);

  int n1, n2, n3, n4;
  int max1, max2, max3, max4;
  int arr[4];
  while (amount--) {
    for (int i = 0; i < 4; i++) {
      scanf("%d", &arr[i]);
    }
    max1 = max2 = max3 = max4 = 0;
    max1 = max(arr[0], arr[1]); 
    max2 = max(arr[2], arr[3]); 
    max3 = max4 = 0;
    for (int k : arr) { //bruh
      if (k > max3) {
        max4 = max3;
        max3 = k;
      } else if (k > max4) {
        max4 = k;
      }
    }
    //printf("%d-%d\n",max1,max2);
    //printf("%d-%d\n",max3,max4);
    printf("%s",((max1 == max3 && max2 == max4)
        || (max1 == max4 && max3 == max2))? "YES" : "NO");
    puts("");
  }
}