 /*
  * @file 961_n-repeated-element-in-size-2n-array
  * @author Jason3e7
  * @algorithm array, algorithm, hashMap
  * @date 201812261014
  * @note must xx OR xox appear
  * but Edge case for 4 elements
  */

#include <stdio.h>

int repeatedNTimes(int* A, int ASize) {
	int i, output;
	for(i = 2; i < ASize; i++) {
		if(A[i - 2] == A[i - 1] || A[i - 2] == A[i]) {
			return A[i - 2];
		}
	}
	return A[3];
}

int main() {
	int a1[] = {1, 2, 3, 3};
	printf("%d\n", repeatedNTimes(a1, 4));	
	int a2[] = {1, 2, 4, 3, 3, 3};
	printf("%d\n", repeatedNTimes(a2, 4));	
	return 0;
}
