 /*
  * @file 888_fair-candy-swap.c
  * @author Jason3e7
  * @algorithm arrayAndMath
  * @date 201811181407
  * @note if have python function more fast(if ((diff / 2) - A[i]) in B:)
  * @note use cache
  */

#include <stdio.h>
#include <stdlib.h>

int* fairCandySwap(int* A, int ASize, int* B, int BSize, int* returnSize) {
	int i, diff = 0;
	int a[100001] = {0};
	for(i = 0; i < ASize; i++) {
		diff += A[i];
		a[A[i]] = 1;
	}
	for(i = 0; i < BSize; i++) {
		diff -= B[i];
	}
	diff /= 2;
	int *output = malloc(sizeof(int) * 2);
	*returnSize = 2;
	int temp = 0;	
	for(i = 0; i < BSize; i++) {
		temp = diff + B[i];
		if((0 <= temp && temp <= 100000) && a[temp] == 1) {
			output[0] = temp;
			output[1] = B[i];
			return output;
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
	int nums1[] = {8, 73, 2, 86, 32};
	int nums2[] = {56, 5, 67, 100, 31};
	int* rSize = malloc(sizeof(int));
	int* p = fairCandySwap(nums1, 5, nums2, 5, rSize);
	printf("%d %d\n", p[0], p[1]);
	return 0;
}
