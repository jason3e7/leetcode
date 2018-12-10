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
	int sPoint = strlen(S) - 1, sCount = 0, tPoint = strlen(T) - 1, tCount = 0;
	while(sPoint >= 0 || tPoint >= 0) {	
		while(S[sPoint] == '#' || sCount > 0) {
			if(S[sPoint] == '#') {
				sCount++;
			} else if('a' <= S[sPoint] && S[sPoint] <= 'z') {
				sCount--;
			} 
			sPoint--;
			if(sPoint < 0) {
				sPoint = 0;
				S[sPoint] = ' ';
				break;
			}
		}
		while(T[tPoint] == '#' || tCount > 0) {
			if(T[tPoint] == '#') {
				tCount++;
			} else if('a' <= T[tPoint] && T[tPoint] <= 'z') {
				tCount--;
			} 
			tPoint--;
			if(tPoint < 0) {
				tPoint = 0;
				T[tPoint] = ' ';
				break;
			}
		}
		if(S[sPoint] != T[tPoint]) {
			return false;
		}
		if(sPoint == 0 || tPoint == 0) {
			if(sPoint == tPoint) {
				break;
			}
		}
		sPoint--;
		if(sPoint < 0) {
			sPoint = 0;
			S[sPoint] = ' ';
		}
		tPoint--;
		if(tPoint < 0) {
			tPoint = 0;
			T[sPoint] = ' ';
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
	char text9[] = "#a";
	char text10[] = "a";
	printf("%d\n", backspaceCompare(text9, text10));	
	return 0;
}
