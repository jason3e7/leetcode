 /*
  * @file 283_move-zeroes.c
  * @author Jason3e7
  * @algorithm array
  * @date 201803121351
  */

#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
	if(numsSize <= 1) {
		return;
	}
	int i = 0, j;
	for(j = 0; j < numsSize; j++) {
		if(nums[j] != 0) {
			nums[i++] = nums[j];
		}
	}	
	while(i < numsSize) {
		nums[i++] = 0;
	}
    return;
}

int main() {
	int arr[] = {0, 1, 0, 3, 12};
	moveZeroes(arr, 5);
	int i;
	for(i = 0; i < 5; i++) {
		printf(" %d", arr[i]);
	}
	return 0;
}
