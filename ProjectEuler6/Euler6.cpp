#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, y, sumX, sumY, squareX, squareY,numX,numY;
	printf("Enter range of the sum of the squares of the ");
	scanf("%d", &numX);
	printf("Enter range of the sum of the squares of the ");
	scanf("%d", &numY);
	sumX = 0;
	sumY = 0;
	for (x = 1;x <= numX;x++) {
		squareX = x * x;
			sumX += squareX;
	}
	for (y = 1;y <= numY;y++) {
		sumY += y;
		}
	squareY = sumY * sumY;
	printf("\nThe sum of the squares : %d", sumX);
	printf("\nThe sum of the squares : %d", squareY);
	printf("\n\nDiference between two number is %d - %d = %d",squareY, sumX,  squareY-sumX);
	return 0;
}

