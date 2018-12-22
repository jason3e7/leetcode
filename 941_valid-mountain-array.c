 /*
  * @file 941_valid-mountain-array
  * @author Jason3e7
  * @algorithm array
  * @date 201812220948
  */

#include <stdio.h>
#include <stdbool.h>

bool validMountainArray(int* A, int ASize) {
	if (ASize <= 2) {
		return false;
	}
	if((A[0] >= A[1]) || (A[ASize - 2] <= A[ASize - 1])) {
		return false;
	}
	int i, flag = 0;
	for(i = 1; i < ASize; i++) {
		if(A[i - 1] == A[i]) {
			return false;
		}
		if(flag == 0 && A[i - 1] > A[i]) {
			flag = 1;
		}
		if(flag == 1 && A[i - 1] < A[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	int num1[] = {1, 2, 1};
	printf("%d\n", validMountainArray(num1, 3));	
	int num2[] = {1, 2, 2, 1};
	printf("%d\n", validMountainArray(num2, 4));	
	int num3[] = {1, 2, 3};
	printf("%d\n", validMountainArray(num3, 3));	
	int num4[] = {3, 2, 1};
	printf("%d\n", validMountainArray(num4, 3));	
	int num5[] = {1, 3, 1, 2, 1};
	printf("%d\n", validMountainArray(num5, 5));	
	return 0;
}
