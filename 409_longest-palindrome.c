 /*
  * @file 409_longest-palindrome
  * @author Jason3e7
  * @algorithm string
  * @date 20190219
  */

#include <stdio.h>
#include <string.h>

int longestPalindrome(char* s) {
	int chars[255] = {0}, i, len = strlen(s);
	for(i = 0; i < len; i++) {
		chars[s[i]]++;
	}
	int odd = 0, mid = 0, count = 0;
	for(i = 0; i < 255; i++) {
		if(chars[i] != 0) {
			odd = chars[i] % 2;
			if(mid == 0 && odd == 1) {
				mid = 1;
			}
			count += (chars[i] - odd);
		}
	}
	return count + mid;
}

int main() {
	printf("%d\n", longestPalindrome("abccccdd"));	
	return 0;
}
