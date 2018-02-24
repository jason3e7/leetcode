 /*
  * @file 70_climbing-stairs.c
  * @author Jason3e7
  * @algorithm math
  * @date 201802251100
  */

#include <stdio.h>

int climbStairs(int n) {
	if(n <= 1) {
		return 1;
	}
	return climbStairs(n - 1) + climbStairs(n - 2);    
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
	printf("%d\n", climbStairs(100));
	return 0;
}
