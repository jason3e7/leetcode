 /*
  * @file 724_find-pivot-index
  * @author Jason3e7
  * @algorithm basic
  * @date 201812181251
  */

#include <stdio.h>

int pivotIndex(int* nums, int numsSize) {
	if(numsSize <= 0) {
		return -1;
	}
	int i, left = 0, right = 0;
	for(i = 1; i < numsSize; i++) {
		right += nums[i];
	} 
	
	i = 0;
	int end = numsSize - 2;
	while(left != right && i <= end) {
		left += nums[i];
		right -= nums[i + 1];
		i++;
	}
	if(left == right) {
		return i;
	}
	return -1;
}

int main() {
	int nums1[] = {0, 0, 0, 1};
	printf("%d\n", pivotIndex(nums1, 4));	
	int nums2[] = {1, 7, 3, 6, 5, 6};
	printf("%d\n", pivotIndex(nums2, 6));	
	int nums3[] = {1, 2, 3};
	printf("%d\n", pivotIndex(nums3, 3));	
	int nums4[] = {};
	printf("%d\n", pivotIndex(nums4, 0));	
	return 0;
}
