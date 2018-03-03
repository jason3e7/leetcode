 /*
  * @file 771_jewels-and-stones.c
  * @author Jason3e7
  * @algorithm basic
  * @date 201803031505
  */

#include <stdio.h>

int numJewelsInStones(char* J, char* S) {
	int i, j, r = 0;
	for(i = 0; J[i] != '\0'; i++) {
		for(j = 0; S[j] != '\0'; j++) {
			if(J[i] == S[j]) {
				r++;
			}
		}
	}
	return r;   
}

int main() {
	printf("%d\n", numJewelsInStones("aA", "aAAbbbb"));
	printf("%d\n", numJewelsInStones("z", "ZZ"));
	return 0;
}
