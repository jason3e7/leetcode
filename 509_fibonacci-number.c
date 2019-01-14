 /*
  * @file 509_fibonacci-number
  * @author Jason3e7
  * @algorithm math, DP
  * @date 20190114
  */

#include <stdio.h>

int f[31] = {0};

int fib(int N) {
	if (N == 0) {
		return 0;
	} 
	if (N == 1 || N == 2) {
		f[N] = 1;
		return 1;
	}
	if(f[N] == 0) {
		f[N] = fib(N - 1) + fib(N - 2);
	}
	return f[N];
}

int main() {
	printf("%d\n", fib(0));	
	printf("%d\n", fib(1));	
	printf("%d\n", fib(2));	
	printf("%d\n", fib(10));	
	printf("%d\n", fib(30));	
	return 0;
}
