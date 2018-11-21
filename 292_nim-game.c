 /*
  * @file 292_nim-game.c
  * @author Jason3e7
  * @algorithm math
  * @date 201811211740
  */

#include <stdio.h>
#include <stdbool.h>

bool canWinNim(int n) {
	return (n % 4) ? true : false;
}

int main() {
	int i;
	for(i = 1; i < 30; i++) {
		printf("%d\n", canWinNim(i));
	}
	return 0;
}
