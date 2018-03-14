 /*
  * @file 268_missing-number.c
  * @author Jason3e7
  * @algorithm math
  * @date 201803151059
  * @note a ^ 0 = a, a ^ b ^ b = a
  */

#include <stdio.h>

int missingNumber(int* nums, int numsSize) {
	if(numsSize <= 0) {
		return 0;
	}
	int i, ans = numsSize;
	for(i = 0; i < numsSize; i++) {
		ans = (ans ^ i ^ nums[i]);
	}
	return ans;
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
