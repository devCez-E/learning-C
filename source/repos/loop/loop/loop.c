#include <stdio.h>

int main(void) {
	//plusplus();
	//loop_for();
	//loop_while();
	//doWhile();
	multipleTable();
}

// ++
int plusplus(void) {
	int a = 10;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);
	a++;
	printf("a 는 %d\n", a);

	int b = 20;
	printf("b 는 %d\n", b);
	printf("b 는 %d\n", ++b);
	printf("b 는 %d\n", b++);
	printf("b 는 %d\n", b);

	return 0;
}

//for
int loop_for(void) {
	for (int i = 1; i < 10; i++) {
		printf("Hello World %d\n", i);
	}

	return 0;
}

//while
int loop_while(void) {
	int varWhile = 1;

	while (varWhile <= 10) {
		printf("Hello World %d\n", varWhile++);
	}
	
	return 0;
}

//do while
int doWhile(void) {
	int var_dw = 1;

	do {
		printf("Hello World %d\n", var_dw++);
	} while (var_dw <= 10);

	return 0;
}

//multiple tables
int multipleTable(void) {
	for (int i = 2; i <= 9; i++) {
		printf("%d단 계산\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("	%d x %d = %d\n", i, j, i * j);
		}
	}
	return 0;
}