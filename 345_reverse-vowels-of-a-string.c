 /*
  * @file 345_reverse-vowels-of-a-string
  * @author Jason3e7
  * @algorithm string
  * @date 20190129
  */

#include <stdio.h>
#include <string.h>

char* reverseVowels(char* s) {
	int begin = 0, end = strlen(s) - 1;
	char temp;
	while(begin < end) {
		while(!(s[begin] == 'a' || s[begin] == 'e' || s[begin] == 'i' || s[begin] == 'o' || s[begin] == 'u' || s[begin] == 'A' || s[begin] == 'E' || s[begin] == 'I' || s[begin] == 'O' || s[begin] == 'U')) {
			if(begin >= end) {
				break;
			}
			begin++;
		}
		while(!(s[end] == 'a' || s[end] == 'e' || s[end] == 'i' || s[end] == 'o' || s[end] == 'u' || s[end] == 'A' || s[end] == 'E' || s[end] == 'I' || s[end] == 'O' || s[end] == 'U')) {
			if(begin >= end) {
				break;
			}
			end--;
		}
		if(begin < end) {
			temp = s[begin];
			s[begin] = s[end];
			s[end] = temp;	
		}
		begin++;
		end--;	
	}
	return s;
}

int main() {
	char s1[] = "hello";
	printf("%s\n", reverseVowels(s1));	
	char s2[] = "leetcode";
	printf("%s\n", reverseVowels(s2));	
	char s3[] = "aA";
	printf("%s\n", reverseVowels(s3));	
	return 0;
}
