 /*
  * @file 14_longest-common-prefix.c
  * @author Jason3e7
  * @algorithm string
  * @date 201809231057
  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
	int i, j, count = 0, len = strlen(strs[0]), check = 1;
	for(i = 0; i < len; i++) {
		for(j = 1; j < strsSize; j++) {
			if(strs[0][i] != strs[j][i]) {
				check = 0;
				break;
			}
		}
		if(check == 0) {
			break;
		}
		count++;
	}
	char *output = malloc(sizeof(char) * count);
	strncpy(output, strs[0], count);
	output[count] = '\0';
	return output;
}

int main() {
	char *test[] = {"flower", "flow", "flight"}; 
	printf("%s\n", longestCommonPrefix(test, 3));
	char *test2[] = {"dog", "racecar", "car"}; 
	printf("%s\n", longestCommonPrefix(test2, 3));
	return 0;
}
