 /*
  * @file 507_perfect-number
  * @author Jason3e7
  * @algorithm math
  * @date 20190220
  */

#include <stdio.h>
#include <stdbool.h>

bool checkPerfectNumber(int num) {
	if(num == 6 || num == 28 || num == 496 || num == 8128 || num == 33550336) {
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
