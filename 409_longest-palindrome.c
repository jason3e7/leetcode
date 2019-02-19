 /*
  * @file 409_longest-palindrome
  * @author Jason3e7
  * @algorithm string
  * @date 20190219
  */

#include <stdio.h>
#include <string.h>

int longestPalindrome(char* s) {
	int chars[128] = {0}, i, len = strlen(s);
	for(i = 0; i < len; i++) {
		chars[s[i]]++;
	}
	int count = 0;
	for(i = 0; i < 128; i++) {
		if(chars[i] != 0) {
			count += (chars[i] - (chars[i] % 2));
		}
	}
	if(count != len) {
		count++;
	}
	return count;
}

int main() {
	printf("%d\n", longestPalindrome("abccccdd"));	
	return 0;
}
