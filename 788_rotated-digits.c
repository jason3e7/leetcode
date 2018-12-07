 /*
  * @file 788_rotated-digits
  * @author Jason3e7
  * @algorithm basic
  * @date 201812070854
  */

#include <stdio.h>

int rotatedDigits(int N) {
	int nFlag[10] = {0, 0, 1, -1, -1, 1, 1, -1, 0, 1};
	int i, temp, count = 0, flag;
	for(i = 1; i <= N; i++) {
		temp = i;
		flag = 0;
		while(temp > 0) {
			if(nFlag[temp % 10] == -1) {
				flag = -1;
				break;
			}
			if(nFlag[temp % 10] == 1) {
				flag = 1;
			}
			temp /= 10;
		}
		if(flag == 1) {
			count++;
		}
	}
	return count;
}

int main() {
	printf("%d\n", rotatedDigits(10));
	printf("%d\n", rotatedDigits(100));
	printf("%d\n", rotatedDigits(1000));
	printf("%d\n", rotatedDigits(10000));
	return 0;
}
