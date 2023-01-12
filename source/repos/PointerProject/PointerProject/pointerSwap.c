#include <stdio.h>

void swap(int a, int b);
void swapUseAddress(int a, int b);

void swap_main() {
	//SWAP
	int a = 10;
	int b = 20;

	printf("A address : %d === B address : %d\n\n", &a, &b);

	//SWAP A and B
	printf("(VAL) BEFORE Swap => A : %d === B : %d\n", a, b);
	swap(a, b);
	printf("(VAL) AFTER Swap => A : %d === B : %d\n\n", a, b);

	//SWAP A and B
	printf("(ADD) BEFORE Swap => A : %d === B : %d\n", a, b);
	swapUseAddress(&a, &b);
	printf("(ADD) AFTER Swap => A : %d === B : %d\n", a, b);
}

void swap(int a, int b) {
	printf("(IN) A's address : %d === B's address : %d\n", &a, &b);
	int temp = a;
	a = b;
	b = temp;
	printf("(IN) A : %d === B : %d\n", a, b);
}

void swapUseAddress(int* a, int* b) {
	printf("(IN) A's address : %d === B's address : %d\n", a, b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(IN) A : %d === B : %d\n", *a, *b);
}