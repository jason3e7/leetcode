 /*
  * @file 66_plus-one.c
  * @author Jason3e7
  * @algorithm arrayAndPointer
  * @date 201811140942
  */

#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
	int i;
	digits[digitsSize - 1]++;
	for(i = digitsSize - 1; i > 0; i--) {
		if(digits[i] >= 10) {
			digits[i] -= 10;
			digits[i - 1]++; 
		}
	}
	if(digits[0] == 10) {
		int *output = malloc(sizeof(int) * (digitsSize + 1));
		*returnSize = digitsSize + 1;
		output[0] = 1;
		for(i = 1; i <= digitsSize; i++) {
			output[i] = 0;
		}
		return output;
	} else {
		int *output = digits;
		*returnSize = digitsSize;
		return output;
	} 
}

int main() {
	//int nums[] = {1, 2, 3};
	int nums[] = {9, 9, 9};
	int* rSize = malloc(sizeof(int));;
	int* p = plusOne(nums, 3, rSize);
	int i;
	for(i = 0; i < *rSize; i++) {
		printf("%d ", p[i]);
	}
	printf("\n");
	return 0;
}
