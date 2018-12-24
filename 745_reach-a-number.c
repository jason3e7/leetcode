 /*
  * @file 745_reach-a-number
  * @author Jason3e7
  * @algorithm algorithm, math
  * @date 201812241025
  */

#include <stdio.h>

int reachNumber(int target) {
	if(target < 0) {
		target *= -1;
	}
	int step = 1, count = 1;
	while(1) {
		if((count >= target) && (count % 2 == target % 2)) {
			break;
		}
		step++;
		count += step;
	}
	return step;
}

int main() {
	int i;
	for(i = 1; i <= 10; i++) {
		printf("%d\n", reachNumber(i));	
	}
	return 0;
}
