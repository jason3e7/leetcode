 /*
  * @file 7_reverse-integer.c
  * @author Jason3e7
  * @algorithm basic
  * @date 201802210849
  * @note -2147483648
  */

#include <stdio.h>

int reverse(int x) {
	if(x == -2147483648) {
		return 0;
	}
    int sign = 1, r = 0;
	if(x < 0) {
		sign = -1;
	}
	x *= sign;
	while(x != 0) {
		if(r > 214748364) {
			return 0;
		}
		r *= 10;
		r += x % 10;
		x /= 10;
	}
	return r * sign;
}

int main() {
	printf("%d\n", reverse(123));
	printf("%d\n", reverse(-123));
	printf("%d\n", reverse(120));
	printf("1534236469 => %d\n", reverse(1534236469));
	printf("-2147483648 => %d\n", reverse(-2147483648));
	return 0;
}
