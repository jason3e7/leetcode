 /*
  * @file 9_palindrome-number.c
  * @author Jason3e7
  * @algorithm basic
  * @date 201802221033
  */

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
	if(x < 0) {
		return false;
	}
	int top = 0, num[10] = {0}, i, j;
	while(x != 0) {
		num[top] = x % 10;
		top++;
		x /= 10;
	}
	if(top <= 1) {
		return true;
	}
	for(i = 0, j = top - 1; i < j; i++, j--) {
		if(num[i] != num[j]) {
			return false;
		}
	}
	return true;
	
}

int main() {
	printf("%d\n", isPalindrome(121));
	printf("%d\n", isPalindrome(-121));
	printf("%d\n", isPalindrome(120));
	printf("1534236469 => %d\n", isPalindrome(1534236469));
	printf("-2147483648 => %d\n", isPalindrome(-2147483648));
	return 0;
}
