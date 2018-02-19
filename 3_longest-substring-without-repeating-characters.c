 /*
  * @file 3_longest-substring-without-repeating-characters.c
  * @author Jason3e7
  * @algorithm string
  * @date 201802200855
  */

#include <stdio.h>

int lengthOfLongestSubstring(char* s) {
	if(s[0] == '\0') {
		return 0;
	}
    int i, j, rBegin = 0, rEnd = 0, tBegin = 0, tEnd = 0, flag;
	for(i = 1; s[i] != '\0'; i++) {
		flag = 0;
		for(j = tBegin; j <= tEnd; j++) {
			if(s[i] == s[j]) {
				flag = 1;
				break;
			}
		}
		tEnd++;
		if(flag == 0) {
			if((tEnd - tBegin) > (rEnd - rBegin)) {
				rBegin = tBegin;
				rEnd = tEnd;
			}
		} else {
			tBegin = j + 1;
		}
	}
	return (rEnd - rBegin + 1);
}

int main() {
	char* a = "abcabcbb"; 
	printf("%d\n", lengthOfLongestSubstring(a));
	char* b = "bbbbb"; 
	printf("%d\n", lengthOfLongestSubstring(b));
	char* c = "pwwkew"; 
	printf("%d\n", lengthOfLongestSubstring(c));
	char* d = ""; 
	printf("%d\n", lengthOfLongestSubstring(d));
	return 0;
}
