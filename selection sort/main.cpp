#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int mas[100];
	int length = 0;
	int temp = 0;
	scanf("%d", &length);
	
	for (int i = 0; i < length; i++) {
		mas[i] = 1 + rand() % 50;
	}
	
	for (int i = 0; i < length; i++) {
		printf("%d ", mas[i]);
	}
	
	printf("\n");
	
	for (int i = 0; i < length; i++) {
		int num = mas[0];
		int num_j = 0;
		for (int j = 0; j < length - i; j++) {
			if (mas[j] > num) {
				num = mas[j];
				num_j = j;
			}
			
			if (j == length - i - 1) {
				temp = mas[j];
				mas[j] = num;
				mas[num_j] = temp;
			}
		}
	}
	
	for (int i = 0; i < length; i++) {
		printf("%d ", mas[i]);
	}
	
	return 0;
}
