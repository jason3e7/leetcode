 /*
  * @file 1_tow-sum.c
  * @author Jason3e7
  * @algorithm brute force
  * @date 201802181329
  */

#include <stdio.h>
#include <stdlib.h> 

int* twoSum(int* nums, int numsSize, int target) {
	int i, j;
	int *ret = malloc (sizeof (int) * 2);
	ret[0] = -1, ret[1] = -1;
	for(i = 0; i < numsSize; i++) {
		for(j = i + 1; j < numsSize; j++) {
			if((nums[i] + nums[j]) == target) {
				ret[0] = i, ret[1] = j;
				return ret;
			}
		}
	}
    return ret;
}

int main() {
	int nums[] = {2, 7, 11, 15}, target = 9;
	int* out = twoSum(nums, 4, target);
	printf("%d %d\n", out[0], out[1]);
	return 0;
}
