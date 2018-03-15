 /*
  * @file 628_maximum-product-of-three-numbers.c
  * @author Jason3e7
  * @algorithm math
  * @date 201803160225
  */

#include <stdio.h>

int maximumProduct(int* nums, int numsSize) {
	if(numsSize == 3) {
		return nums[0] * nums[1] * nums[2];
	}
 	int i, max[3] = {0}, ne[2] = {0};
	for(i = 0; i < numsSize; i++) {
		if(nums[i] > max[0]) {
			max[2] = max[1];
			max[1] = max[0];
			max[0] = nums[i];
		} else if(nums[i] > max[1]) {
			max[2] = max[1];
			max[1] = nums[i];
		} else if(nums[i] > max[2]) {
			max[2] = nums[i];
		}
		if(nums[i] < ne[0]) {
			ne[1] = ne[0];
			ne[0] = nums[i];
		} else if(nums[i] < ne[1]) {
			ne[1] = nums[i];
		}
	}   
	max[1] = max[0] * max[1] * max[2];
	max[2] = max[0] * ne[0] * ne[1];
	if(max[1] > max[2]) {
		return max[1];
	}
	return max[2];
}

int main() {
	int arr0[] = {4, 3, 2, 1};
	printf("%d\n", maximumProduct(arr0, 4));
	int arr1[] = {4, 3, -4};
	printf("%d\n", maximumProduct(arr1, 3));
	int arr[] = {3, 0, 1, 3};
	printf("%d\n", maximumProduct(arr, 4));
	int arr2[] = {9,6,4,2,3,-3,-1000,-2};
	printf("%d\n", maximumProduct(arr2, 8));
	return 0;
}
