 /*
  * @file 961_n-repeated-element-in-size-2n-array
  * @author Jason3e7
  * @algorithm array, hashMap
  * @date 201812261014
  */

#include <stdio.h>

int repeatedNTimes(int* A, int ASize) {
    int count[10000] = {0};
	int i, output;
	for(i = 0; i < ASize; i++) {
		if(count[A[i]] != 0) {
			output = A[i];
			break;	
		}
		count[A[i]]++;
	}
	return output;
}

int main() {
	int a[] = {1, 2, 3, 3};
	printf("%d\n", repeatedNTimes(a, 4));	
	return 0;
}
