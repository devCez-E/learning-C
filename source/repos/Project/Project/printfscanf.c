#include<stdio.h>

int main(void) {
	// 정수형 변수에 대한 예제
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);

	// 실수형 변수에 대한 예제
	float f = 46.5f;
	printf("%f\n", f);
	printf("%.2f\n", f);

	double d = 4.428;
	printf("%lf\n", d);
	printf("%.2lf\n", d);

	// 상수형 변수에 대한 예제
	const int YEAR = 1995;
	printf("태어난 년도 : %d\n", YEAR);
	//YEAR = 1996;
	
	// printf에 대한 예제
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, add);
	
	// scanf에 대한 예제
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);

	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);

	// 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	char c = 'A';
	printf("%c\n", c);

	char str[256] = "Hello World";
	printf("%s\n", str);

	return 0;
}