 /*
  * @file 13_roman-to-integer.c
  * @author Jason3e7
  * @algorithm basic
  * @date 201802241554
  */

#include <stdio.h>

int romanToInt(char* s) {
	int i = 0, r = 0;
	while(s[i] != '\0') {
		switch(s[i]) {
			case 'I' :
				if(s[i + 1] == 'V') {
					r += 4;
					i++;
					break;
				}
				if(s[i + 1] == 'X') {
					r += 9;
					i++;
					break;
				}
				r += 1;
				break;
			case 'V' :
				r += 5;
				break;
			case 'X' :
				if(s[i + 1] == 'L') {
					r += 40;
					i++;
					break; 
				}
				if(s[i + 1] == 'C') {
					r += 90;
					i++;
					break;
				}
				r += 10;
				break;
			case 'L' :
				r += 50;
				break;
			case 'C' :
				if(s[i + 1] == 'D') {
					r += 400;
					i++;
					break;
				}
				if(s[i + 1] == 'M') {
					r += 900;
					i++;
					break;
				}
				r += 100;
				break;
			case 'D' :
				r += 500;
				break;
			case 'M' :
				r += 1000;
				break;
		}
		i++;
	}
	return r;
}

int main() {
	printf("%d\n", romanToInt("I"));
	printf("%d\n", romanToInt("XCIX"));
	printf("%d\n", romanToInt("MDCCLXXVI"));
	printf("%d\n", romanToInt("MCMLIV"));
	printf("%d\n", romanToInt("MCMXC"));
	
	return 0;
}
