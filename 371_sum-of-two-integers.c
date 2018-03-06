 /*
  * @file 371_sum-of-two-integers.c
  * @author Jason3e7
  * @algorithm bitwise
  * @date 201803071007
  */

#include <stdio.h>

int getSum(int a, int b) {
	if(b == 0) {
		return a;
	}
	return getSum(a ^ b, (a & b) << 1);
}

int main() {
	printf("%d\n", getSum(0, 0));
	printf("%d\n", getSum(1, 0));
	printf("%d\n", getSum(0, 1));
	printf("%d\n", getSum(1, 1));
	printf("%d\n", getSum(7, 1));
	printf("%d\n", getSum(1000, 111));
	return 0;
}
