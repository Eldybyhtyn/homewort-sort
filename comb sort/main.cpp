#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int temp = 0, length = 0, k = 0, rightBorder = 0;
	int mas[100];
	scanf("%d", &length);
	
	for (int i = 0; i < length; i++) {
		mas[i] = 4 + rand() % 100;
	}
	for (int i = 0; i < length; i++) {
		printf("%d ", mas[i]);
	}
	printf("\n");
	
	rightBorder = length - 1;
	
	while (rightBorder > 0) {
		k = 0;
		for (int i = rightBorder; i < length; i++) {
			if (mas[k] > mas[i]) {
				temp = mas[k];
				mas[k] = mas[i];
				mas[i] = temp;
			}
			k++;
		}
		rightBorder--;
	}
	
	for (int i = 0; i < length; i++) {
		printf("%d ", mas[i]);
	}
	
	return 0;
}
