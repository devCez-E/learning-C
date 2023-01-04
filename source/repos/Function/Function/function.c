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
	printf("사과 5개 중에 2개를 먹으면?\n%d개가 남아요.\n", ret);
	printf("사과 %d개 중에 %d개를 먹으면?\n%d개가 남아요.", 10, 4, apple(10, 4));

	return 0;
}

int calculate(void) {
	int num = 2;
	//printf("num은 %d 입니다.\n", num);
	p(num);

	num = num + 3;
	//printf("num은 %d 입니다.\n", num);
	p(num);

	num = num - 1;
	//printf("num은 %d 입니다.\n", num);
	p(num);

	num *= 3;
	//printf("num은 %d 입니다.\n", num);
	p(num);

	num /= 6;
	//printf("num은 %d 입니다.\n", num);
	p(num);

	return 0;
}

void p(int num) {
	printf("num은 %d 입니다.\n", num);
}

// function without return
void function_without_return() {
	printf("반환 값이 없는 함수 입니다.\n");
}

// function with return
int function_with_return() {
	return 10;
}

// function without parameter
void function_without_params() {
	printf("전달 값이 없는 함수 입니다.\n");
}

// function with parameter
void function_with_params(int num) {
	printf("전달 값 %d를 받았습니다.\n", num);
}

// function with return and parameter
int apple(int total, int ate) {
	return total - ate;
}