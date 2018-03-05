 /*
  * @file 344_reverse-string.c
  * @author Jason3e7
  * @algorithm basic
  * @date 201803061147
  */

#include <stdio.h>
#include <string.h>

char* reverseString(char* s) {
    int l = 0, r = strlen(s) - 1;
	char tmp;
	while(l < r) {
		tmp = s[l];
		s[l] = s[r];
		s[r] = tmp;
		l++, r--;
	}
	return s;
}

int main() {
	char arr[100] = "";
	printf("%s\n", reverseString(arr));
	strcpy(arr, "h");
	printf("%s\n", reverseString(arr));
	strcpy(arr, "he");
	printf("%s\n", reverseString(arr));
	strcpy(arr, "hel");
	printf("%s\n", reverseString(arr));
	strcpy(arr, "hell");
	printf("%s\n", reverseString(arr));
	strcpy(arr, "hello");
	printf("%s\n", reverseString(arr));
	return 0;
}
