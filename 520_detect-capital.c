 /*
  * @file 520_detect-capital
  * @author Jason3e7
  * @algorithm string
  * @date 201812091410
  */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool detectCapitalUse(char* word) {
	int i, len = strlen(word);
	char begin, end;
	if(len <= 1) {
		return true;
	}
	if('a' <= word[0] && word[0] <= 'z') {
		begin = 'a';
		end = 'z';
	} else if('A' <= word[0] && word[0] <= 'Z') {
		if('a' <= word[1] && word[1] <= 'z') {
			begin = 'a';
			end = 'z';
		} else if('A' <= word[1] && word[1] <= 'Z') {
			begin = 'A';
			end = 'Z';
		}
	}

	for(i = 1; i < len; i++) {
		if(!(begin <= word[i] && word[i] <= end)) {
			return false;
		}
	}
	return true;
}

int main() {
	printf("%d\n", detectCapitalUse("USA"));	
	printf("%d\n", detectCapitalUse("FlaG"));	
	printf("%d\n", detectCapitalUse("leetcode"));	
	printf("%d\n", detectCapitalUse("Google"));	
	printf("%d\n", detectCapitalUse("mL"));	
	return 0;
}
