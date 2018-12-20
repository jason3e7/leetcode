 /*
  * @file 172_factorial-trailing-zeroes
  * @author Jason3e7
  * @algorithm math
  * @date 201812201212
  */

#include <stdio.h>

int trailingZeroes(int n) {
	int twoC = 0, fiveC = 0;
	int temp;
	temp = n;
	while(temp != 0) {
		temp /= 2;
		twoC += temp;
	}
	temp = n;
	while(temp != 0) {
		temp /= 5;
		fiveC += temp;
	}
	if(twoC < fiveC) {
		return twoC;
	}
	return fiveC;
}

int main() {
	printf("%d\n", trailingZeroes(3));	
	printf("%d\n", trailingZeroes(5));	
	printf("%d 24999\n", trailingZeroes(100000));	
	return 0;
}
