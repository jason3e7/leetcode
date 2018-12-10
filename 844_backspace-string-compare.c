 /*
  * @file 844_backspace-string-compare
  * @author Jason3e7
  * @algorithm string
  * @date 201812101038
  */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool backspaceCompare(char* S, char* T) {
	int i;
	int sLen = strlen(S), sPoint = 0;
	for(i = 0; i < sLen; i++) {
		if(S[i] == '#') {
			sPoint--;
			if(sPoint < 0) {
				S[0] = ' ';
				sPoint = 0;
			}
			continue;
		} else if('a' <= S[i] && S[i] <= 'z') {
			S[sPoint] = S[i];
			sPoint++;
		}
	}
	int tLen = strlen(T), tPoint = 0;
	for(i = 0; i < tLen; i++) {
		if(T[i] == '#') {
			tPoint--;
			if(tPoint < 0) {
				T[0] = ' ';
				tPoint = 0;
			}
			continue;
		} else if('a' <= T[i] && T[i] <= 'z') {
			T[tPoint] = T[i];
			tPoint++;
		}
	}
	if(sPoint != tPoint) {
		return false;
	}
	for(i = 0; i < sPoint; i++) {
		if(S[i] != T[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	char text1[] = "ab#c";
	char text2[] = "ad#c";
	printf("%d\n", backspaceCompare(text1, text2));	
	char text3[] = "ab##";
	char text4[] = "c#d#";
	printf("%d\n", backspaceCompare(text3, text4));	
	char text5[] = "a##c";
	char text6[] = "#a#c";
	printf("%d\n", backspaceCompare(text5, text6));	
	char text7[] = "a#c";
	char text8[] = "b";
	printf("%d\n", backspaceCompare(text7, text8));	
	return 0;
}
