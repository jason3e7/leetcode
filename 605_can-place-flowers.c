 /*
  * @file 605_can-place-flowers
  * @author Jason3e7
  * @algorithm array
  * @date 201812251023
  */

#include <stdio.h>
#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
	if(n <= 0) {
		return true;
	}
    int i;
	for(i = 0; i < flowerbedSize; i++) {
		if(flowerbed[i] == 1) {
			i++;
			continue;
		}
		if(i > 0) {
			if(flowerbed[i - 1] == 1) {
				continue;
			}
		} 
		if(i < (flowerbedSize - 1)) {
			if(flowerbed[i + 1] == 1) {
				continue;
			}
		} 
		flowerbed[i] = 1;
		n--;
		if(n <= 0) {
			return true;
		}
	}
	return false;
}

int main() {
	int f1[] = {1, 0, 0, 0, 1};
	printf("%d\n", canPlaceFlowers(f1, 5, 1));	
	int f2[] = {1, 0, 1, 0, 1, 0, 1};
	printf("%d\n", canPlaceFlowers(f2, 7, 0));	
	return 0;
}
