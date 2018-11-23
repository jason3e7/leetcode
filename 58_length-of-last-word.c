 /*
  * @file 58_length-of-last-word.c
  * @author Jason3e7
  * @algorithm arrayAndString
  * @date 201811231317
  */

#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char* s) {
	int i, len = strlen(s), output = 0;
	for(i = len - 1; i >= 0; i--) {
		if(s[i] != ' ') {
			output++;
		} else {
			if (output != 0) {
				return output;
			}
		}
	}
	return output;
}

int main() {
	printf("%d\n", lengthOfLastWord(""));
	printf("%d\n", lengthOfLastWord(" "));
	printf("%d\n", lengthOfLastWord("Hello World"));
	printf("%d\n", lengthOfLastWord("Hello World "));
	return 0;
}
