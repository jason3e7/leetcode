 /*
  * @file 400_nth-digit.c
  * @author Jason3e7
  * @algorithm math
  * @date 201811251012
  * @note 9 * num * digit 
  * 720000000 < 2147483647 < 8100000000
  */

#include <stdio.h>

int findNthDigit(int n) {
	int digit = 1, base = 9, num = 1;
	while(n > base) {
		n -= base;
		
		num *= 10;
		digit++;
		if(digit <= 8) {
			base = ((9 * num) * digit);
		} else {
			break;
		}
	}
	
	//because from zero locate
	n--;
	//printf("digit = %d, num = %d, locate = %d\n", digit, num, n);
	
	if(n != 0) 
		num += (n / digit);
	n %= digit;
	//printf("num = %d, locate = %d\n", num, n);

	n = (digit - n - 1);
	while(n--) {	
		num /= 10;
	}	
	return num % 10;
}

int main() {
	printf("1 %d\n", findNthDigit(1));
	printf("9 %d\n", findNthDigit(9));
	printf("10 %d\n", findNthDigit(10));
	printf("189 %d\n", findNthDigit(189));
	printf("190 %d\n", findNthDigit(190));
	printf("2889 %d\n", findNthDigit(2889));
	printf("2890 %d\n", findNthDigit(2890));
	printf("2147483647 %d\n", findNthDigit(2147483647));
	return 0;
}
