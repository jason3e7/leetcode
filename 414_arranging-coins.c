 /*
  * @file 414_arranging-coins
  * @author Jason3e7
  * @algorithm math
  * @date 201812191134
  * @note
x^2 + x - 2y = 0

quadratic equation

y = 15 => x = 5, -6
y = 18 => x = 5.5..., -6.5...
y = 21 => x = 6, -7
  */

#include <stdio.h>

int arrangeCoins(int n) {
	int count = 1;
	while(n >= count) {
		n -= count;
		count++;
	}
	return count - 1;	
}

int main() {
	printf("%d\n", arrangeCoins(5));	
	printf("%d\n", arrangeCoins(8));	
	printf("%d\n", arrangeCoins(0));	
	printf("%d\n", arrangeCoins(1));	
	return 0;
}
