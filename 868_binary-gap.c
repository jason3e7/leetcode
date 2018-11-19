 /*
  * @file 868_binary-gap.c
  * @author Jason3e7
  * @algorithm binary
  * @date 201811192137
  */

#include <stdio.h>

int binaryGap(int N) {
	int largest = 0, i, last = -1, temp;
	for(i = 0; N > 0; N /= 2, i++) {	
		if(N % 2 == 1) {
			if(last != -1) {
				temp = i - last;
				if(temp > largest) {
					largest = temp;
				}
			}
			last = i;
		}
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
