 /*
  * @file 242_valid-anagram
  * @author Jason3e7
  * @algorithm string
  * @date 20190212
  */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
	int len = strlen(s);
	if(len != strlen(t)) {
		return false;
	}
	int i, count[26] = {0};
	for(i = 0; i < len; i++) {
		count[s[i] - 97]++;
		count[t[i] - 97]--;
	}
	for(i = 0; i < 26; i++) {
		if(count[i] != 0) {
			return false;
		}
	}
    return true;
}

int main() {
	printf("%d\n", isAnagram("aa", "a"));	
	printf("%d\n", isAnagram("anagram", "nagaram"));	
	printf("%d\n", isAnagram("rat", "car"));	
	return 0;
}
