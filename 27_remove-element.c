 /*
  * @file 27_remove-element.c
  * @author Jason3e7
  * @algorithm in-place
  * @date 201802260816
  * @note why fast !? no ! QQ 
  */

#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
	int count = 0, i;
	for(i = 0; i < numsSize; i++) {
		if(nums[i] != val) {
			nums[count++] = nums[i];
		}
	}
	return count; 
}

int main() {
	int num[] = {3, 2, 2, 3};
	printf("%d\n", removeElement(num, 4, 3));
	int num2[] = {2};
	printf("%d\n", removeElement(num2, 1, 3));
	return 0;
}
