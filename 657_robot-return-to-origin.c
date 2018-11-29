 /*
  * @file 657_robot-return-to-origin
  * @author Jason3e7
  * @algorithm string
  * @date 201811290925
  */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool judgeCircle(char* moves) {
	int i, len = strlen(moves);
	int h = 0, v = 0;
	for(i = 0; i < len; i++) {
		switch(moves[i]) { 
			case 'U':
				h++; 
				break;
			case 'D':
				h--; 
				break;
			case 'R':
				v++; 
				break;
			case 'L':
				v--; 
				break;
			default:
				break;
		}
	}
	if(h == 0 && v == 0) {
		return true;
	} 
	return false;
}

int main() {
	printf("%d\n", judgeCircle("UD"));
	printf("%d\n", judgeCircle("LL"));
	return 0;
}
