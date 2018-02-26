 /*
  * @file 69_sqrtx.c
  * @author Jason3e7
  * @algorithm basic
  * @date 201802271052
  * @note sqrt(2147483647) = 46340....
  */

#include <stdio.h>

int mySqrt(int x) {
	int i, res = 0;
	for(i = 1; i <= 46340; i++) {
		if(i * i > x) {
			break;
		} else {
			res = i;
		}
	}
	return res;
}

int main() {
	printf("%d\n", mySqrt(0));
	printf("%d\n", mySqrt(1));
	printf("%d\n", mySqrt(2));
	printf("%d\n", mySqrt(10));
	printf("%d\n", mySqrt(100));
	printf("%d\n", mySqrt(10000));
	printf("%d\n", mySqrt(1000000));
	printf("%d\n", mySqrt(2147483647));
	return 0;
}
