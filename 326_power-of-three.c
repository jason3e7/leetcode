 /*
  * @file 326_power-of-three
  * @author Jason3e7
  * @algorithm math
  * @date 20190130
  */

#include <stdio.h>
#include <stdbool.h>

bool isPowerOfThree(int n) {
	if(n <= 0) {
		return false;
	}
	while(n >= 3) {
		if(n % 3 != 0) {
			return false;
		}
		n /= 3;
	}
	if(n == 1) {
		return true;
	}
	return false;
}

int main() {
	int i;
	for(i = 0; i <= 10; i++) {
		printf("%d\n", isPowerOfThree(i));	
	}	
	return 0;
}
