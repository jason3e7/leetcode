 /*
  * @file 509_fibonacci-number
  * @author Jason3e7
  * @algorithm math
  * @date 20190114
  */

#include <stdio.h>

int fib(int N) {
	if (N == 0) {
		return 0;
	} 
	if (N == 1) {
		return 1;
	}
	return fib(N - 1) + fib(N - 2);
}

int main() {
	printf("%d\n", fib(0));	
	printf("%d\n", fib(1));	
	printf("%d\n", fib(2));	
	printf("%d\n", fib(10));	
	printf("%d\n", fib(30));	
	return 0;
}
