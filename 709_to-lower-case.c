 /*
  * @file 709_to-lower-case.c
  * @author Jason3e7
  * @algorithm string
  * @date 201811141708
  */

#include <stdio.h>
#include <string.h>

char* toLowerCase(char* str) {
    int i, len = strlen(str);
	for(i = 0; i < len; i++) {
		if(65 <= str[i] && str[i] <= 90) {
			str[i] += 32;
		}
	}
	return str;
}

int main() {
	char test[] = "HELLO";
	printf("%s\n", toLowerCase(test));
	char test2[] = "here";
	printf("%s\n", toLowerCase(test2));
	char test3[] = "LOVeLY";
	printf("%s\n", toLowerCase(test3));
	return 0;
}
