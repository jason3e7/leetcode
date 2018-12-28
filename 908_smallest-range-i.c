 /*
  * @file 908_smallest-range-i
  * @author Jason3e7
  * @algorithm math
  * @date 201812281418
  */

#include <stdio.h>

int smallestRangeI(int* A, int ASize, int K) {
	if(ASize <= 1) {
		return 0;
	}   
	int i, min = A[0], max = A[0];
	for(i = 1; i < ASize; i++) {
		if(min > A[i]) {
			min = A[i];
		}
		if(max < A[i]) {
			max = A[i];
		}
	}
	int output = ((max - min) - K * 2);
	if(output <= 0) {
		return 0;
	}
	return output;
}

int main() {
	int num1[] = {1};
	printf("%d\n", smallestRangeI(num1, 1, 0));	
	int num2[] = {0, 10};
	printf("%d\n", smallestRangeI(num2, 2, 2));	
	int num3[] = {1, 3, 6};
	printf("%d\n", smallestRangeI(num3, 3, 3));	
	return 0;
}
