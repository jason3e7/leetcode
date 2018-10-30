 /*
  * @file 20_valid-parentheses.c
  * @author Jason3e7
  * @algorithm stringAndStack
  * @date 201810302112
  */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool isValid(char* s) {
	int i, len = strlen(s);
	if((len % 2) == 1) {
		return false;
	}
	char *stack = malloc(sizeof(char) * (len / 2));
	int head = 0, j; 
	for(i = 0; i < len; i++) {
		if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
			stack[head] = s[i];
			head++;
			continue;
		} 
		if((s[i] == ')' && stack[head - 1] == '(') || (s[i] == ']' && stack[head - 1] == '[') || (s[i] == '}' && stack[head - 1] == '{')) {
			head--;
		} else {
			return false;
		}
	}
	if(head != 0) {
		return false;
	}
    return true;
}

int main() {
	printf("%d\n", isValid(""));
	printf("() %d\n", isValid("()"));
	printf("(( %d\n", isValid("(("));
	printf("()[]{} %d\n", isValid("()[]{}"));
	printf("(] %d\n", isValid("(]"));
	printf("([)] %d\n", isValid("([)]"));
	printf("{[]}] %d\n", isValid("{[]}]"));
	printf("{[]} %d\n", isValid("{[]}"));
	printf("{[]}() %d\n", isValid("{[]}()"));
	printf("{[]}(){ %d\n", isValid("{[]}(){"));
	printf("({[]}()) %d\n", isValid("({[]}())"));
	return 0;
}
