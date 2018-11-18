 /*
  * @file 888_fair-candy-swap.c
  * @author Jason3e7
  * @algorithm arrayAndMath
  * @date 201811181407
  */

#include <stdio.h>
#include <stdlib.h>

int* fairCandySwap(int* A, int ASize, int* B, int BSize, int* returnSize) {
	int i, j, diff = 0;
	for(i = 0; i < ASize; i++) {
		diff += A[i];
	}
	for(i = 0; i < BSize; i++) {
		diff -= B[i];
	}
	int *output = malloc(sizeof(int) * 2);
	*returnSize = 2;
	for(i = 0; i < ASize; i++) {
		for(j = 0; j < BSize; j++) {
			if((A[i] - B[j]) * 2 == diff) {
				output[0] = A[i];
				output[1] = B[j];
				return output;
			}
		}
	}
	return output;
}

int main() {
	/*
	int nums1[] = {1, 1};
	int nums2[] = {2, 2};
	
	int nums1[] = {1, 2, 5};
	int nums2[] = {2, 4};
	*/
	int nums1[] = {1, 2, 5};
	int nums2[] = {2, 4};
	int* rSize = malloc(sizeof(int));
	int* p = fairCandySwap(nums1, 3, nums2, 2, rSize);
	printf("%d %d\n", p[0], p[1]);
	return 0;
}
