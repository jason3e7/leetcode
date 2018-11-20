 /*
  * @file 693_binary-number-with-alternating-bits.c
  * @author Jason3e7
  * @algorithm binary
  * @date 201811201337
  */

#include <stdio.h>
#include <stdbool.h>

bool hasAlternatingBits(int n) {
    int last = -1, prev;
	while(n > 0) {
		prev = n % 2;
		if(last == prev) {
			return false;
		} else {
			last = prev;
		}
		n /= 2;
	}
	return true;
}

int main() {
	printf("%d\n", hasAlternatingBits(1));
	printf("%d\n", hasAlternatingBits(5));
	printf("%d\n", hasAlternatingBits(7));
	printf("%d\n", hasAlternatingBits(11));
	printf("%d\n", hasAlternatingBits(10));
	return 0;
}
