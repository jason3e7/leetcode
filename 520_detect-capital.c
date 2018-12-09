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
	int i, len = strlen(word), type = 0;
	if(len <= 1) {
		return true;
	}
	if('a' <= word[0] && word[0] <= 'z') {
		type = 1;
	} else if('A' <= word[0] && word[0] <= 'Z') {
		if('a' <= word[1] && word[1] <= 'z') {
			type = 2;
		} else if('A' <= word[1] && word[1] <= 'Z') {
			type = 3;
		}
	}
	for(i = 1; i < len; i++) {
		if(type == 1 || type == 2) {
			if('A' <= word[i] && word[i] <= 'Z') {
				return false;
			}
		} else if(type == 3) {
			if('a' <= word[i] && word[i] <= 'z') {
				return false;
			}
		}
	}
	return true;
}

int main() {
	printf("%d\n", detectCapitalUse("USA"));	
	printf("%d\n", detectCapitalUse("FlaG"));	
	printf("%d\n", detectCapitalUse("leetcode"));	
	printf("%d\n", detectCapitalUse("Google"));	
	return 0;
}
