 /*
  * @file 172_factorial-trailing-zeroes
  * @author Jason3e7
  * @algorithm math
  * @date 201812201212
  * @note alway twcCount > fiveCount
  */

#include <stdio.h>

int trailingZeroes(int n) {
	int count = 0;
	while(n != 0) {
		n /= 5;
		count += n;
	}
	return count;
}

int main() {
	printf("%d 0\n", trailingZeroes(3));	
	printf("%d 1\n", trailingZeroes(5));	
	printf("%d 24999\n", trailingZeroes(100000));	
	printf("%d 536870902\n", trailingZeroes(2147483647));	
	return 0;
}
