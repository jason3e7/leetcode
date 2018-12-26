 /*
  * @file 961_n-repeated-element-in-size-2n-array
  * @author Jason3e7
  * @algorithm array
  * @date 201812261014
  */

#include <stdio.h>

int repeatedNTimes(int* A, int ASize) {
    int count[10000] = {0};
	int i, output;
	for(i = 0; i < ASize; i++) {
		count[A[i]]++;
	}
	ASize /= 2;
	for(i = 0; i < 10000; i++) {
		if(count[i] == ASize) {
			output = i;
			break;
		}  
	}
	return output;
}

int main() {
	int a[] = {1, 2, 3, 3};
	printf("%d\n", repeatedNTimes(a, 4));	
	return 0;
}
