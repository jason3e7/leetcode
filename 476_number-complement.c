 /*
  * @file 476_number-complement.c
  * @author Jason3e7
  * @algorithm binary
  * @date 201811220938
  */

#include <stdio.h>

int findComplement(int num) {
	int base = 2, output;
	while(1) {
		output = ((base - 1) - num);
		if(output >= 0) {
			break;
		}
		base *= 2;
	}
	return output;
}

int main() {
	printf("%d\n", findComplement(1));
	printf("%d\n", findComplement(5));
	return 0;
}
