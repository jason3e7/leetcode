 /*
  * @file 575_distribute-candies
  * @author Jason3e7
  * @algorithm math
  * @date 2018120311130
  */

#include <stdio.h>

int distributeCandies(int* candies, int candiesSize) {
	int exist[5000] = {0}, count = 0, max = (candiesSize / 2);
	int i, j, flag;
	for(i = 0; i < candiesSize; i++) {
		flag = 1;
		for(j = 0; j < count; j++) {
			if(candies[i] == exist[j]) {
				flag = 0;
				break;
			}
		}
		if(flag == 1) {
			exist[count] = candies[i];
			count++;	
			if(count == max) {
				break;
			}
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
