#include <stdio.h>

void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num);
int apple(int total, int ate);

int function_main(void) {
	//calculate();
	
	//function_without_return();
	
	//int ret = function_with_return();
	//p(ret);
	
	//function_without_params();

	//function_with_params(5);

	int ret = apple(5, 2);
	printf("��� 5�� �߿� 2���� ������?\n%d���� ���ƿ�.\n", ret);
	printf("��� %d�� �߿� %d���� ������?\n%d���� ���ƿ�.", 10, 4, apple(10, 4));

	return 0;
}

int calculate(void) {
	int num = 2;
	//printf("num�� %d �Դϴ�.\n", num);
	p(num);

	num = num + 3;
	//printf("num�� %d �Դϴ�.\n", num);
	p(num);

	num = num - 1;
	//printf("num�� %d �Դϴ�.\n", num);
	p(num);

	num *= 3;
	//printf("num�� %d �Դϴ�.\n", num);
	p(num);

	num /= 6;
	//printf("num�� %d �Դϴ�.\n", num);
	p(num);

	return 0;
}

void p(int num) {
	printf("num�� %d �Դϴ�.\n", num);
}

// function without return
void function_without_return() {
	printf("��ȯ ���� ���� �Լ� �Դϴ�.\n");
}

// function with return
int function_with_return() {
	return 10;
}

// function without parameter
void function_without_params() {
	printf("���� ���� ���� �Լ� �Դϴ�.\n");
}

// function with parameter
void function_with_params(int num) {
	printf("���� �� %d�� �޾ҽ��ϴ�.\n", num);
}

// function with return and parameter
int apple(int total, int ate) {
	return total - ate;
}