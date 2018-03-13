 /*
  * @file 258_add-digits.c
  * @author Jason3e7
  * @algorithm math
  * @date 201803141123
  */

#include <stdio.h>

int addDigits(int num) {
	if(num == 0) {
		return 0;
	}
	int n = num % 9;
	return n ? n : 9;   
}

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		printf("%d\n", addDigits(n));
	}
	return 0;
}
