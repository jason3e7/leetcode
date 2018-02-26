 /*
  * @file 69_sqrtx.c
  * @author Jason3e7
  * @algorithm Newton's method
  * @date 201802271052
  * @note
  * 
x^2 - a = 0
(x, f(x)), Derivative 2x

ex : http://www.matrix67.com/blog/archives/361
(4, 14), 8
next x => (y2 - y1) / (x2 - x1) = m
(14 - 0) / (4 - x) = 8
4 - x = 14 / 8
x = 4 - 14 / 8 
x = 2.25

x-f(x)/(2x), f(x)=x^2-a
x - (x^2-a)/(2x)
x - x/2 + a/2x
(x + a/x)/2 

(4 + 2/4)/2 = 2.25
  */

#include <stdio.h>

int mySqrt(int x) { 
    long r = x;
    while (r * r > x)
        r = (r + x / r) / 2;
    return r;
    
}

int main() {
	printf("%d\n", mySqrt(0));
	printf("%d\n", mySqrt(1));
	printf("%d\n", mySqrt(2));
	printf("%d\n", mySqrt(10));
	printf("%d\n", mySqrt(100));
	printf("%d\n", mySqrt(10000));
	printf("%d\n", mySqrt(1000000));
	printf("%d\n", mySqrt(2147483647));
	return 0;
}
