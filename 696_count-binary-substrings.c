 /*
  * @file 696_count-binary-substrings.c
  * @author Jason3e7
  * @algorithm string
  * @date 201809131116
  */

#include <stdio.h>
#include <string.h>

int countBinarySubstrings(char* s) {
	int i, len = strlen(s), output = 0;
	int zeroC = 0, oneC = 0, now = -1;
	for(i = 0; i < len; i++) {
		if(s[i] == '0') {
			if(now == 1) {
				output += (zeroC < oneC) ? zeroC : oneC;
				zeroC = 0;
			} 
			now = 0;
			zeroC++;
		} 
		if(s[i] == '1') {
			if(now == 0) {
				output += (zeroC < oneC) ? zeroC : oneC;
				oneC = 0;
			} 
			now = 1;
			oneC++;
		}
	}
	output += (zeroC < oneC) ? zeroC : oneC;
	return output;
}

int main() {
	printf("%d\n", countBinarySubstrings("00110011"));
	printf("%d\n", countBinarySubstrings("10101"));
	return 0;
}
