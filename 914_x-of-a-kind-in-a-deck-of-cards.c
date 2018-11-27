 /*
  * @file 914_x-of-a-kind-in-a-deck-of-cards
  * @author Jason3e7
  * @algorithm array
  * @date 201811271144
  */

#include <stdio.h>
#include <stdbool.h>

bool hasGroupsSizeX(int* deck, int deckSize) {
	int i, j, count[10000] = {0};
	for(i = 0; i < deckSize; i++) {
		count[deck[i]]++;
	}
	int flag;
	for(j = 2; j <= deckSize; j++) {
		flag = 1;
		for(i = 0; i < 10000; i++) {
			if(count[i] % j != 0) {
				flag = 0;
				break;
			}
		}
		if(flag == 1) {
			return true;
		} 
	}
	return false;;
}

int main() {
	int num1[] = {1, 2, 3, 4, 4, 3, 2, 1};
	printf("%d\n", hasGroupsSizeX(num1, 8));
	int num2[] = {1, 1, 1, 2, 2, 2, 3, 3, 3};
	printf("%d\n", hasGroupsSizeX(num2, 9));
	int num3[] = {1, 1, 1, 2, 2, 2, 3, 3};
	printf("%d\n", hasGroupsSizeX(num3, 8));
	return 0;
}
