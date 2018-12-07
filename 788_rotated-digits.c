 /*
  * @file 788_rotated-digits
  * @author Jason3e7
  * @algorithm math
  * @date 201812070854
  */

#include <stdio.h>

int rotatedDigits(int N) {
	int nFlag[10] = {0, 0, 1, -1, -1, 1, 1, -1, 0, 1};
	int dMap[10] = {1, 2, 2, 2, 2, 2, 2, 2, 3, 3};
	int zMap[10] = {0, 0, 1, 1, 1, 2, 3, 3, 3, 4};

	int i, base = 3, dCount[5] = {0}, zCount[5] = {0};
	dCount[1] = 4;
	zCount[1] = 7;
	for(i = 2; i <= 4; i++) {
		dCount[i] = (dCount[i - 1] * 7) + (4 * base);
		base *= 3;
		zCount[i] = (zCount[i - 1] * 7);
	}

	int point = 0, digit[5] = {0}; 
	while(N > 0) {
		digit[point] = N % 10;
		point++;
		N /= 10;
	}

	int headNum, flag = 0, count = 0;
	for(i = point - 1; i >= 1; i--) {
		headNum = digit[i];
		if(headNum == 0) {
			continue;
		}

		if (flag == -1) {
			break;
		} else if (flag == 0) {
			count += ((dCount[i] * dMap[headNum - 1]) + (zCount[i] * zMap[headNum - 1])); 
		} else if (flag == 1) {
			count += ((zMap[headNum - 1] + dMap[headNum - 1]) * zCount[i]); 
		}
	
		if (nFlag[headNum] == 0) {
			flag = (nFlag[headNum] + flag);
		} else {
			flag = nFlag[headNum];
		}
	}
	if (flag == 0) {
		count += zMap[digit[0]]; 
	} else if (flag == 1) {
		count += (zMap[digit[0]] + dMap[digit[0]]); 
	}
	
	return count;
}

int main() {
	printf("132 %d\n", rotatedDigits(502));
	printf("691 %d\n", rotatedDigits(2112));
	printf("779 %d\n", rotatedDigits(2321));
	printf("779 %d\n", rotatedDigits(2432));
	printf("877 %d\n", rotatedDigits(2789));
	
	printf("40 %d\n", rotatedDigits(100));
	printf("40 %d\n", rotatedDigits(101));
	printf("44 %d\n", rotatedDigits(111));
	printf("81 %d\n", rotatedDigits(200));
	printf("82 %d\n", rotatedDigits(201));
	printf("89 %d\n", rotatedDigits(211));
	
	printf("40 %d\n", rotatedDigits(100));
	printf("44 %d\n", rotatedDigits(110));
	printf("44 %d\n", rotatedDigits(111));
	printf("45 %d\n", rotatedDigits(112));
	printf("46 %d\n", rotatedDigits(115));
	printf("47 %d\n", rotatedDigits(118));
	
	printf("129 %d\n", rotatedDigits(300));
	printf("129 %d\n", rotatedDigits(400));
	printf("4 %d\n", rotatedDigits(10));
	printf("40 %d\n", rotatedDigits(100));
	printf("316 %d\n", rotatedDigits(1000));
	printf("2320 %d\n", rotatedDigits(10000));	
	return 0;
}
