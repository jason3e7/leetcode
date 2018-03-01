 /*
  * @file 53_maximum-subarray.c
  * @author Jason3e7
  * @algorithm basic
  * @date 201803021053
  */

#include <stdio.h>

int maxSubArray(int* nums, int numsSize) {
	if(numsSize <= 0) {
		return 0;
	}
	int max = nums[0], sum = nums[0], i;
	for(i = 1; i < numsSize; i++) {
		if(sum > 0) {
			sum += nums[i];
		} else {
			sum = nums[i];
		}
		if(sum > max) {
			max = sum;
		}
	}
	return max; 
}

int main() {
	int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	printf("%d\n", maxSubArray(arr, 9));
	int arr2[] = {-1};
	printf("%d\n", maxSubArray(arr2, 1));
	int arr22[] = {-3, -1};
	printf("%d\n", maxSubArray(arr22, 2));
	int arr23[] = {2, 3};
	printf("%d\n", maxSubArray(arr23, 2));
	int arr3[] = {};
	printf("%d\n", maxSubArray(arr3, 0));
	return 0;
}
