 /*
  * @file 268_missing-number.c
  * @author Jason3e7
  * @algorithm math
  * @date 201803151059
  */

#include <stdio.h>

int missingNumber(int* nums, int numsSize) {
	if(numsSize <= 0) {
		return 0;
	}
	int i, sum = 0;
	for(i = 0; i < numsSize; i++) {
		sum += nums[i];
	}
	return ((1 + numsSize) * numsSize) / 2 - sum;
}

int main() {
	int arr0[] = {};
	printf("%d\n", missingNumber(arr0, 0));
	int arr1[] = {0};
	printf("%d\n", missingNumber(arr1, 1));
	int arr[] = {3,0,1};
	printf("%d\n", missingNumber(arr, 3));
	int arr2[] = {9,6,4,2,3,5,7,0,1};
	printf("%d\n", missingNumber(arr2, 9));
	return 0;
}
