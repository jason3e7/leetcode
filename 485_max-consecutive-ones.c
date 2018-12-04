 /*
  * @file 485_max-consecutive-ones
  * @author Jason3e7
  * @algorithm array
  * @date 201812040949
  */

#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize) {
	int i, count = 0, max = 0;
	for(i = 0; i < numsSize; i++) {
		if(nums[i] == 1) {
			count++;
		} else {
			if(count > max) {
				max = count;
			} 
			count = 0;
		}
	}	   
	if(count > max) {
		max = count;
	} 
	return max;
}

int main() {
	int num1[] = {1, 1, 0, 1, 1, 1};
	printf("%d\n", findMaxConsecutiveOnes(num1, 6));
	return 0;
}
