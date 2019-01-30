 /*
  * @file 326_power-of-three
  * @author Jason3e7
  * @algorithm math
  * @date 20190130
  * @note max power of 3, 3^19 = 1162261467
  */

#include <stdio.h>
#include <stdbool.h>

bool isPowerOfThree(int n) {
	return (n > 0) && (1162261467 % n == 0);
}

int main() {
	int i;
	for(i = 0; i <= 10; i++) {
		printf("%d\n", isPowerOfThree(i));	
	}	
	return 0;
}
