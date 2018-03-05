 /*
  * @file 189_rotate-array.c
  * @author Jason3e7
  * @algorithm basic
  * @date 201803052212
  * @note there are at least 3 different ways to solve this problem.
  */

#include <stdio.h>

void rotate(int* nums, int numsSize, int k) {
	if(numsSize <= 1) {
		return;
	}
	k %= numsSize;
	int flag = 1;
	if(numsSize - k < k) {
		flag = -1;
		k = numsSize - k;
	}
	int i, tmp;
	while(k--) {
		if(flag == 1) {
			tmp = nums[numsSize - 1];
			for(i = numsSize - 1; i >= 1; i--) {
				nums[i] = nums[i - 1]; 
			}
			nums[0] = tmp;
		}
		if(flag == -1) {
			tmp = nums[0];
			for(i = 1; i < numsSize; i++) {
				nums[i - 1] = nums[i]; 
			}
			nums[numsSize - 1] = tmp;
		}
	}
}

int main() {
	int nums0[] = {};
	rotate(nums0, 0, 0);
	int nums[] = {1, 2, 3, 4, 5, 6, 7};
	rotate(nums, 7, 3);
	int i;
	for(i = 0; i < 7; i++) {
		printf("%d ", nums[i]);
	}
	int nums2[] = {1, 2};
	rotate(nums2, 2, 3);
	for(i = 0; i < 3; i++) {
		printf("%d ", nums2[i]);
	}
	return 0;
}
