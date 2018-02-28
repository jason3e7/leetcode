 /*
  * @file 26_remove-duplicates-from-sorted-array.c
  * @author Jason3e7
  * @algorithm basic
  * @date 201803011108
  */

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
	if(numsSize <= 0) {
		return numsSize;
	}
    int i = 0, j;
	for(j = 1; j < numsSize; j++) {
		if(nums[i] != nums[j]) {
			i++;
			nums[i] = nums[j]; 
		}
	}
	return i + 1;
}

int main() {
	int arr[] = {2, 2, 3, 3, 4};
	printf("%d\n", removeDuplicates(arr, 5));
	int arr2[] = {1, 1, 2};
	printf("%d\n", removeDuplicates(arr2, 3));
	return 0;
}
