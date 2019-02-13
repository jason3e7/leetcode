 /*
  * @file 121_best-time-to-buy-and-sell-stock
  * @author Jason3e7
  * @algorithm array
  * @date 20190213
  */

#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
	int i, profit = 0, max = 0;
	for(i = pricesSize - 1; i >= 0; i--) {
		if(prices[i] > max) {
			max = prices[i];
		}
		if((max - prices[i]) > profit) {
			profit = (max - prices[i]);
		}
	}
	return profit;
}

int main() {
	int num1[] = {7,1,5,3,6,4};
	printf("%d\n", maxProfit(num1, 6));	
	int num2[] = {7,6,4,3,1};
	printf("%d\n", maxProfit(num2, 5));	
	int num3[] = {7,4,6,1,4};
	printf("%d\n", maxProfit(num3, 5));	
	return 0;
}
