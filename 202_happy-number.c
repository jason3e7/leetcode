 /*
  * @file 202_happy-number.c
  * @author Jason3e7
  * @algorithm basic
  * @date 201803131132
  * @note 
2147483647 
=> 9^2 * D  < 100 * D
=> 9^2 * 10 < 1000
  */

#include <stdio.h>
#include <stdbool.h>

int getNext(int n) {
	int base, sum = 0;
 	while(n > 0) { 
		base = n % 10;
		sum += (base * base);
		n /= 10;
	}
	return sum;
}

bool isHappy(int n) {
	bool nums[1001] = {false};
	int next = getNext(n);
	while(nums[next] == false) {
		nums[next] = true;
		next = getNext(next);
	}	
	if(next == 1) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		printf("%d\n", isHappy(n));
	}
	return 0;
}
