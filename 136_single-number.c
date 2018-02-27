 /*
  * @file 136_single-number.c
  * @author Jason3e7
  * @algorithm math
  * @date 201802280918
  * @note O(n)
  */

#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
	int i, r = 0;
	for(i = 0; i < numsSize; i++) {
		r ^= nums[i];
	}
	return r; 
}

int main() {
	int arr[] = {2, 2, 3, 3, 4};
	printf("%d\n", singleNumber(arr, 5));
	return 0;
}
