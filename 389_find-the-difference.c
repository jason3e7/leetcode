 /*
  * @file 389_find-the-difference
  * @author Jason3e7
  * @algorithm string
  * @date 201812050948
  */

#include <stdio.h>
#include <string.h>

char findTheDifference(char* s, char* t) {
	int i, charNum[26] = {0}, slen = strlen(s), tlen = strlen(t);
	for(i = 0; i < slen; i++) {
		charNum[s[i] - 97]++;
	}
	for(i = 0; i < tlen; i++) {
		charNum[t[i] - 97]--;
	}
	char c = 'a';
	for(i = 0; i < 26; i++) {
		if(charNum[i] != 0) {
			c += i;
			break;
		}
	}
	return c; 
}

int main() {
	printf("%c\n", findTheDifference("abce", "abcde"));
	printf("%c\n", findTheDifference("gfeds", "sdef"));
	return 0;
}
