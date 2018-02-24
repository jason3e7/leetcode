 /*
  * @file 70_climbing-stairs.c
  * @author Jason3e7
  * @algorithm math
  * @date 201802251100
  * @note
  * F(46) 1836311903
  * F(47) 2971215073
  */

#include <stdio.h>

int num[46] = {0};

int genNum() {
	int i;
	num[0] = 1;
	num[1] = 1;
	for(i = 2; i < 46; i++) {
		num[i] = num[i - 1] + num[i - 2];
	}
	return 0;
}

int climbStairs(int n) {
	if(num[0] == 0) {
		genNum();
	}
	if(n <= 1) {
		return 1;
	}
	return num[n];    
}

int main() {
	printf("%d\n", climbStairs(1));
	printf("%d\n", climbStairs(2));
	printf("%d\n", climbStairs(3));
	printf("%d\n", climbStairs(4));
	printf("%d\n", climbStairs(5));
	printf("%d\n", climbStairs(6));
	printf("%d\n", climbStairs(7));
	printf("%d\n", climbStairs(8));
	printf("%d\n", climbStairs(45));
	return 0;
}
