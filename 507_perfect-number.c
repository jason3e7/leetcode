 /*
  * @file 507_perfect-number
  * @author Jason3e7
  * @algorithm math
  * @date 20190220
  */

#include <stdio.h>
#include <stdbool.h>

bool checkPerfectNumber(int num) {
	if(num <= 1) {
		return false;
	}

	int i, count = 1;
	for(i = 2; i * i <= num; i++) {
		if(num % i == 0) {
			count += (i + (num / i));
		}
	}
	if(count == num) {
		return true;
	}
	return false;
}

int main() {
	printf("%d\n", checkPerfectNumber(33550336));
	int i;
	for(i = -1; i < 100000000; i++) {
		if(checkPerfectNumber(i) == true) {
			printf("%d\n", i);
		}	
	}
	return 0;
}
