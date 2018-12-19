 /*
  * @file 414_arranging-coins
  * @author Jason3e7
  * @algorithm basic
  * @date 201812191134
  */

#include <stdio.h>

int arrangeCoins(int n) {
	int count = 0;
	while(n > 0) {
		count++;
		n -= count;
	}
	if(n < 0) {
		count--;
	}
	return count;	
}

int main() {
	printf("%d\n", arrangeCoins(5));	
	printf("%d\n", arrangeCoins(8));	
	printf("%d\n", arrangeCoins(0));	
	return 0;
}
