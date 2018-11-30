 /*
  * @file 361_hamming-distance
  * @author Jason3e7
  * @algorithm binary
  * @date 201811301123
  */

#include <stdio.h>

int hammingDistance(int x, int y) {
	if(x == y) {
		return 0;
	} 
	int count = 0;
	while(x != 0 || y != 0) {
		if(x % 2 != y % 2) {
			count++;
		}
		if(x != 0) {
			x /= 2;
		}
		if(y != 0) {
			y /= 2;
		}
	}
	return count;
}

int main() {
	printf("%d\n", hammingDistance(1, 4));
	printf("%d\n", hammingDistance(1, 1));
	printf("%d\n", hammingDistance(1, 0));
	printf("%d\n", hammingDistance(3, 1));
	printf("%d\n", hammingDistance(0, 2147483647));
	return 0;
}
