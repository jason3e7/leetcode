 /*
  * @file 896_monotonic-array.c
  * @author Jason3e7
  * @algorithm array
  * @date 201811261130
  */

#include <stdio.h>
#include <stdbool.h>

bool isMonotonic(int* A, int ASize) {
	if(ASize <= 1) {
		return true;
	}
	int i, prev = A[0], flag = 0;
	for(i = 1; i < ASize; i++) {
		if(flag == 0) {
			if(prev < A[i]) {
				flag = 1;
			}
			if(prev > A[i]) {
				flag = -1;
			}
		} else {
			if((prev < A[i] && flag == -1) || (prev > A[i] && flag == 1)) {
				return false;
			}
		}
		prev = A[i];
	} 
	return true;
}

int main() {
	int num1[] = {1, 2, 2, 3};
	printf("%d\n", isMonotonic(num1, 4));
	int num2[] = {6, 5, 4, 4};
	printf("%d\n", isMonotonic(num2, 4));
	int num3[] = {1, 3, 2};
	printf("%d\n", isMonotonic(num3, 3));
	int num4[] = {};
	printf("%d\n", isMonotonic(num4, 0));
	int num5[] = {1};
	printf("%d\n", isMonotonic(num5, 1));
	int num6[] = {1, 1, 1};
	printf("%d\n", isMonotonic(num6, 3));
	return 0;
}
