 /*
  * @file 868_binary-gap.c
  * @author Jason3e7
  * @algorithm binary
  * @date 201811192137
  */

#include <stdio.h>

int binaryGap(int N) {
	int largest = 0, flag = 0, count = 1;
	while(N > 0) {
		if(N % 2 == 1) {
			if(flag == 1) {
				if(count > largest) {
					largest = count;
				}
				count = 1;
			} else {
				flag = 1;
			}
		} else {
			if(flag == 1) {
				count++;
			}
		}
		N /= 2;
	}
	return largest;
}

int main() {
	printf("%d\n", binaryGap(1));
	printf("%d\n", binaryGap(22));
	printf("%d\n", binaryGap(5));
	printf("%d\n", binaryGap(6));
	printf("%d\n", binaryGap(8));
	printf("%d\n", binaryGap(1000000000));
	return 0;
}
