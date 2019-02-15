 /*
  * @file 769_rotate-string
  * @author Jason3e7
  * @algorithm string
  * @date 20190215
  */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool rotateString(char* A, char* B) {
	int aLen = strlen(A), bLen = strlen(B);
	if(aLen != bLen) {
		return false;
	}
	if(aLen == 0) {
		return true;
	}
	char* twoA = (char*)malloc(sizeof(char)*(2 * aLen + 1));	
	int i, j, twoAlen = aLen * 2, check;
	for(i = 0; i < twoAlen; i++) {
		twoA[i] = A[i % aLen];
	}
	twoA[twoAlen] = '\0';
	for(i = 0; i < twoAlen; i++) {
		check = 1;
		for(j = 0; j < bLen; j++) {
			if(B[j] != twoA[j + i]) {
				check = 0;
				break;
			}
		}
		if(check == 1) {
			return true;
		}
	}
    return false;
}

int main() {
	printf("%d\n", rotateString("abcde", "cdeab"));	
	printf("%d\n", rotateString("abcde", "abced"));	
	printf("%d\n", rotateString("", ""));	
	return 0;
}
