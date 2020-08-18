#include<stdio.h>
int main() {
	int x, y, sumX, sumY, squareX, squareY;
	sumX = 0;
	sumY = 0;
	for (x = 1;x <= 100;x++) {
		squareX = x * x;
			sumX += squareX;
			
	}
	
	for (y = 1;y <= 100;y++) {
		sumY += y;
		}
	squareY = sumY * sumY;

	printf("sum x %d - sum y %d = %d", sumX, squareY, squareY-sumX);
	return 0;
}