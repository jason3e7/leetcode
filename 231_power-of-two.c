 /*
  * @file 231_power-of-two.c
  * @author Jason3e7
  * @algorithm bitwise
  * @date 201803090934
  */

#include <stdio.h>
#include <stdbool.h>


bool isPowerOfTwo(int n) {
	return n > 0 && (n & (n - 1)) == 0;
}

int main() {
	int i;
	for(i = 0; i <= 10; i++) {
		printf("%d => %d\n", i, isPowerOfTwo(i));
	}
	return 0;
}
