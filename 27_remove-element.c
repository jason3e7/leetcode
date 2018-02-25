 /*
  * @file 27_remove-element.c
  * @author Jason3e7
  * @algorithm in-place
  * @date 201802260816
  */

#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
	int i, j = numsSize - 1, temp;
	for(i = 0; i <= j; i++) {
		if(nums[i] != val) {
			continue;
		}
		while(nums[j] == val) {
			if(i == j) {
				return i;
			}
			j--;
		}
		temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	}
	return i; 
}

int main() {
	int num[] = {3, 2, 2, 3};
	printf("%d\n", removeElement(num, 4, 3));
	int num2[] = {2};
	printf("%d\n", removeElement(num2, 1, 3));
	return 0;
}
