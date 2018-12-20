 /*
  * @file 172_factorial-trailing-zeroes
  * @author Jason3e7
  * @algorithm math
  * @date 201812201212
  */

#include <stdio.h>

int trailingZeroes(int n) {
	int twoC = 0, fiveC = 0;
	int i, temp;
	for(i = 2; i <= n; i++) {
		temp = i;
		while(temp != 0 && temp % 2 == 0) {
			twoC++;
			temp /= 2;
		}
		while(temp != 0 && temp % 5 == 0) {
			fiveC++;
			temp /= 5;
		}
	}
	if(twoC < fiveC) {
		return twoC;
	}
	return fiveC;
}

int main() {
	printf("%d\n", trailingZeroes(3));	
	printf("%d\n", trailingZeroes(5));	
	printf("%d\n", trailingZeroes(100000));	
	return 0;
}
