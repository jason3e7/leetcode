 /*
  * @file 693_binary-number-with-alternating-bits.c
  * @author Jason3e7
  * @algorithm binary
  * @date 201811201337
  */

#include <stdio.h>
#include <stdbool.h>

bool hasAlternatingBits(int n) {
    int flag = 1, last = -1, prev;
	while(n > 0) {
		prev = n % 2;
		if(last == -1) {
			last = prev;
		} else {
			if(last == prev) {
				flag = 0;
				break;
			} else {
				last = prev;
			}
		}
		n /= 2;
	}
	if(flag == 1) {
		return true;
	}
	return false;
}

int main() {
	printf("%d\n", hasAlternatingBits(1));
	printf("%d\n", hasAlternatingBits(5));
	printf("%d\n", hasAlternatingBits(7));
	printf("%d\n", hasAlternatingBits(11));
	printf("%d\n", hasAlternatingBits(10));
	return 0;
}
