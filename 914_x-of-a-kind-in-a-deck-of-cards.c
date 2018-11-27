 /*
  * @file 914_x-of-a-kind-in-a-deck-of-cards
  * @author Jason3e7
  * @algorithm arrayAndMath
  * @date 201811271144
  * @note GCD !?
  */

#include <stdio.h>
#include <stdbool.h>

bool hasGroupsSizeX(int* deck, int deckSize) {
	if(deckSize <= 1) {
		return false;
	}
	if(deckSize == 2) {
		return (deck[0] == deck[1]);
	}
	int i, count[10000] = {0}, point = 0;
	for(i = 0; i < deckSize; i++) {
		count[deck[i]]++;
	}
	int max = 2, min = deckSize;
	for(i = 0; i < 10000; i++) {
		if(count[i] == 1) {
			return false;
		}
		if(count[i] != 0) {
			count[point] = count[i];
			point++;
			
			if(count[i] > max) {
				max = count[i];
			}
			if(count[i] < min) {
				min = count[i];
			}
		}
	}
	if(min == max) {
		return true;
	}

	int j, flag;
	for(j = 2; j <= min; j++) {
		flag = 1;
		for(i = 0; i < point; i++) {
			if(count[i] % j != 0) {
				flag = 0;
				break;
			}
		}
		if(flag == 1) {
			return true;
		}
	}
	return false;
}

int main() {
	int num1[] = {1, 2, 3, 4, 4, 3, 2, 1};
	printf("%d\n", hasGroupsSizeX(num1, 8));
	int num2[] = {1, 1, 1, 2, 2, 2, 3, 3, 3};
	printf("%d\n", hasGroupsSizeX(num2, 9));
	int num3[] = {1, 1, 1, 2, 2, 2, 3, 3};
	printf("%d\n", hasGroupsSizeX(num3, 8));
	int num4[] = {1, 1, 1, 1, 2, 2, 2, 2, 2, 2};
	printf("%d\n", hasGroupsSizeX(num4, 10));
	return 0;
}
