#include <stdio.h>
#include <time.h>

int main(void) {
	SwitchCase();
}

int IfElse(void) {
	int age = 22;

	if (age >= 20) printf("일반인입니다.");
	else if (age >= 17 && age <= 19) printf("고등학생입니다.");
	else if (age >= 14 && age <= 16) printf("중학생입니다.");
	else if (age >= 8 && age <= 13) printf("초등학생입니다.");
	else printf("미취학아동입니다.");

	return 0;
}

int Break(void) {
	for (int i = 1; i <= 20; i++) {
		if (i >= 6) {
			printf("나머지 학생은 집에 가세요\n");
			break;
		}
		printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
	}
}

int Continue(void) {
	for (int i = 1; i <= 20; i++) {
		if (i >= 6 && i<= 10) {
			if (i == 7) {
				printf("%d 번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
		}
	}
}

int SwitchCase(void) {

	srand(time(NULL));

	int i = rand() % 3;

	switch (i) {
		case 0: printf("가위\n"); break;
		case 1: printf("바위\n"); break;
		case 2: printf("보\n"); break;
		default: printf("몰라요\n"); break;
	}
	
	return 0;
}