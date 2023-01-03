#include <stdio.h>

int main(void) {
	pyramide();
}

int question1(void) {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int question2(void) {
	for(int i = 1; i <= 5; i++) {
		for (int j = 5; j >= i; j--) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int pyramide(void) {
	int floor;
	printf("¸î ÃþÀ¸·Î ½×°Ú´À³Ä?");
	scanf_s("%d", &floor);

	for (int i = 1; i <= floor; i++) {
		for (int j = 0; j < floor - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= i * 2 - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}