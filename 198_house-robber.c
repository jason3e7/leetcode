 /*
  * @file 198_house-robber
  * @author Jason3e7
  * @algorithm DP
  * @date 201812111557
  */

#include <stdio.h>

int rob(int* nums, int numsSize) {
	if(numsSize == 0) {
		return 0;
	}
	if(numsSize == 1) {
		return nums[0];
	}
	
	int i, max = nums[0];
	if(nums[1] > max) {
		max = nums[1];
	}
    for(i = 2; i < numsSize; i++) {
		if(i == 2) {
			nums[i] += nums[i - 2];
		} else {
			if (nums[i - 2] > nums[i - 3]) {
				nums[i] += nums[i - 2];
			} else {
				nums[i] += nums[i - 3];
			}
		}
		
		if(nums[i] > max) {
			max = nums[i];
		}
	}
	return max;
}

int main() {
	int nums1[] = {1, 9, 1, 9, 1, 1, 9};
	printf("%d\n", rob(nums1, 7));	
	int nums2[] = {1, 2, 3, 1};
	printf("%d\n", rob(nums2, 4));	
	return 0;
}
