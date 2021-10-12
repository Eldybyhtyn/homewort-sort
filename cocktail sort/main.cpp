#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int mas[100];
	int length = 0, temp = 0;
	scanf("%d", &length);
	
	for (int i = 0; i < length; i++) {
		mas[i] = 1 + rand() % 50;
	}
	
	for(int i = 0; i < length; i++) {
		printf("%d ", mas[i]);
	}
	printf("\n");
	
	int leftBorder = 0, rightBorder = length;
	
	while (rightBorder - leftBorder > 2) {
		for (int i = leftBorder; i < rightBorder - 1; i++) {
			if (mas[i] > mas[i + 1]) {
				temp = mas[i];
				mas[i] = mas[i + 1];
				mas[i + 1] = temp;
			}
		}
		
		rightBorder -= 1;
		
		for (int i = rightBorder; i > leftBorder; i--) {
			if (mas[i - 1] > mas[i]) {
				temp = mas[i];
				mas[i] = mas[i - 1];
				mas[i - 1] = temp;
			}
		}
		
		leftBorder += 1;
	}
	
	for(int i = 0; i < length; i++) {
		printf("%d ", mas[i]);
	}	
	
	
	return 0;
}
