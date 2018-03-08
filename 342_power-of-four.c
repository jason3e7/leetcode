 /*
  * @file 342_power-of-four.c
  * @author Jason3e7
  * @algorithm bitwise
  * @date 201803081226
  * @note 
only one bit, power of 2 
n & (n - 1) == 0

the bits at odd
n & 0x55555555 > 0 or n & 0x55555555 == n
  */

#include <stdio.h>
#include <stdbool.h>

bool isPowerOfFour(int num) {
	return num > 0 && (num & (num - 1)) == 0 && (num & 0x55555555) == num;
}

int main() {
	printf("%d\n", isPowerOfFour(0));
	printf("%d\n", isPowerOfFour(1));
	printf("%d\n", isPowerOfFour(2));
	printf("%d\n", isPowerOfFour(3));
	printf("%d\n", isPowerOfFour(4));
	printf("%d\n", isPowerOfFour(5));
	printf("%d\n", isPowerOfFour(6));
	printf("%d\n", isPowerOfFour(7));
	printf("%d\n", isPowerOfFour(8));
	printf("%d\n", isPowerOfFour(9));
	return 0;
}
