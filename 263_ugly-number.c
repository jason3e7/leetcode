 /*
  * @file 263_ugly-number
  * @author Jason3e7
  * @algorithm basic
  * @date 201812160944
  */

#include <stdio.h>
#include <stdbool.h>

bool isUgly(int num) {
	if(num <= 0) {
		return false;
	}
	int i, base[3] = {2, 3, 5};
	for(i = 0; i < 3; i++) {
		while(num != 0 && num % base[i] == 0) {
			num /= base[i];
		}
	}
	if(num == 1) {
    	return true;
	}
    return false;
}

int main() {
	printf("%d\n", isUgly(6));	
	printf("%d\n", isUgly(8));	
	printf("%d\n", isUgly(14));	
	return 0;
}
