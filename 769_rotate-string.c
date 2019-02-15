 /*
  * @file 769_rotate-string
  * @author Jason3e7
  * @algorithm string
  * @date 20190215
  */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool rotateString(char* A, char* B) {
	int aLen = strlen(A), bLen = strlen(B), shift = 0;
	if(aLen != bLen) {
		return false;
	}
	if(aLen == 0) {
		return true;
	}	
	int p, i, j, check;
	for(p = 0; p < aLen; p++) {
		check = 1;
		for(i = 0, j = 0 + p; i < aLen; i++, j++) {
			if(j >= aLen) {
				j -= aLen;
			}
			if(A[i] != B[j]) {
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
