 /*
  * @file 69_sqrtx.c
  * @author Jason3e7
  * @algorithm bisection
  * @date 201802271052
  * @note 
try 2, 3 
begin == end is different
  */

#include <stdio.h>

int mySqrt(int x) {
	if(x == 0 || x == 1) {
		return x;
	}
    int begin = 1, end = x, mid, temp;
    while (begin <= end) {
        mid = begin + (end - begin) / 2;
		temp = x / mid;
		if(mid == temp) {
			return mid;
		}
		if(mid > temp) {
			end = mid - 1;
		} else {
			begin = mid + 1;
		}
	}
	return end;
}

int main() {
	int i;
	for(i = 0; i <= 10; i++) {
		printf("%d = %d\n", i, mySqrt(i));
	}
	printf("%d\n", mySqrt(100));
	printf("%d\n", mySqrt(10000));
	printf("%d\n", mySqrt(1000000));
	printf("%d\n", mySqrt(2147483647));
	return 0;
}
