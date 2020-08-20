#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, y, sumX, sumY, squareX, squareY,numX,numY;
	printf("        \" Enter number more than 0\" \n");
	printf("Enter range of the sum of the squares of the ");
	scanf("%d", &numX);
	printf("Enter range of the sum of the squares of the ");
	scanf("%d", &numY);
	sumX = 0;
	sumY = 0;
	if (numX >= 0 && numY > 0) {
		for (x = 1;x <= numX;x++) {
			squareX = x * x;
			sumX += squareX;
		}
		for (y = 1;y <= numY;y++) {
			sumY += y;
			squareY = sumY * sumY;
		}
		printf("\nThe sum of the squares : %d", sumX);
		printf("\nThe sum of the squares : %d", squareY);
		printf("\n\nDiference between two number is %d - %d = %d", squareY, sumX, squareY - sumX);
	}
	else if(numY == 0 && numX ==0) printf("Diference between two number is 0");
	else printf("you enter less than 0 \"Error\"");
	return 0;
}

