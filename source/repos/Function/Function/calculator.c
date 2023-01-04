#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int multiple(int a, int b);
int devide(int a, int b);
void pp(int num);

void calcuator_main() {
	int num = 2;
	pp(num);

	num = add(num, 3);
	pp(num);

	num = sub(num, 1);
	pp(num);

	num = multiple(num, 3);
	pp(num);

	num = devide(num, 6);
	pp(num);

}

void pp(int num) {
	printf("결과값은 %d 입니다.\n", num);
}

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int multiple(int a, int b) {
	return a * b;
}

int devide(int a, int b) {
	return a / b;
}