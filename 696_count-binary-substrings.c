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
	int prev = 0, cur = 1;
	for(i = 1; i < len; i++) {
		if(s[i - 1] != s[i]) {
			output += (prev < cur) ? prev : cur;
			prev = cur;
			cur = 0; 
		} 
		cur++;
	}
	output += (prev < cur) ? prev : cur;
	return output;
}

int main() {
	printf("%d\n", countBinarySubstrings("00110011"));
	printf("%d\n", countBinarySubstrings("10101"));
	return 0;
}
