 /*
  * @file 258_add-digits.c
  * @author Jason3e7
  * @algorithm math
  * @date 201803141123
  * @note https://www.wikiwand.com/en/Digital_root#/Congruence_formula
  */

#include <stdio.h>

int addDigits(int num) {
	return (num - 1) % 9 + 1;   
}

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		printf("%d\n", addDigits(n));
	}
	return 0;
}
