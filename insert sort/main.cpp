#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	
	int mas[100];
	int length = 0;
	scanf("%d", &length);
	
	for (int i = 0; i < length; i++) {
		mas[i] = 1 + rand() % 50;
	}
	
	for (int i = 0; i < length; i++) {
		printf("%d ", mas[i]);
	}
	printf("\n");
	
	for (int i = 1; i < length; i++) {
		int num = mas[i];
		
		for (int j = i; j > -1; j--) {
			if (mas[j - 1] > num) {
				mas[j] = mas[j - 1];
				
			} else {
				
				mas[j] = num;
				break;
			}
		}
	}
	
	for (int i = 0; i < length; i++) {
		printf("%d ", mas[i]);
	}
	
	return 0;
}
