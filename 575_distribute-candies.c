 /*
  * @file 575_distribute-candies
  * @author Jason3e7
  * @algorithm math
  * @date 201812031130
  */

#include <stdio.h>
#include <stdbool.h>

int distributeCandies(int* candies, int candiesSize) {
	bool exist[200001] = {0}; 
	int max = (candiesSize / 2), offset;
	int i, count = 0;
	for(i = 0; i < candiesSize; i++) {
		offset = candies[i] + 100000;
		if(exist[offset] == 0) {
			count++;
			exist[offset] = 1;
		}
		if(count == max) {
			break;
		}
	}
	return count;
}

int main() {
	int num1[] = {1, 1, 2, 2, 3, 3};
	printf("%d\n", distributeCandies(num1, 6));
	int num2[] = {1, 1, 2, 3};
	printf("%d\n", distributeCandies(num2, 4));
	int num3[] = {-100000, 100000, 0, 0, 0, 0};
	printf("%d\n", distributeCandies(num3, 6));
	int num4[] = {1, 1, 1, 1};
	printf("%d\n", distributeCandies(num4, 4));
	return 0;
}
