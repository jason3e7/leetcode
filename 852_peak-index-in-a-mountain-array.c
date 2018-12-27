 /*
  * @file 852_peak-index-in-a-mountain-array
  * @author Jason3e7
  * @algorithm array, binarySearch
  * @date 201812271051
  */

#include <stdio.h>

int peakIndexInMountainArray(int* A, int ASize) {
	int i;
	ASize--;
	for(i = 1; i < ASize; i++) {
		if(A[i] > A[i + 1]) {
			break;
		}
	}   
	return i;
}

int main() {
	int num1[] = {1, 2, 1};
	printf("%d\n", peakIndexInMountainArray(num1, 3));	
	int num2[] = {1, 2, 4, 1};
	printf("%d\n", peakIndexInMountainArray(num2, 4));	
	return 0;
}
