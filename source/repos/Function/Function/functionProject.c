#include <stdio.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int i, int num1, int num2);
void success();
void fail();

void main() {

	srand(time(NULL));

	int count = 0;
	for (int i = 1; i <= 5; i++) {
		int x = getRandomNumber(i);
		int y = getRandomNumber(i);
		showQuestion(i, x, y);

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1) {
			printf("프로그램을 종료합니다.\n");
			exit(0);
		}
		else if (answer == x * y) {
			success();
			count++;
		}
		else {
			fail();
		}
	}

	printf("\n\n ---------당신은 5개의 비밀번호 중 %d개를 맞았습니다.---------\n", count);
}

void showQuestion(int i, int num1, int num2) {
	printf("\n\n\n######## %d 번 째 비밀번호 ########\n", i);
	printf("\n\t%d x %d 는?\n\n", num1, num2);
	printf("\n\n\n###################################\n");
	printf("\n비밀번호를 입력하세요 (종료 : -1) >>> ");
}

int getRandomNumber(int level) {
	return rand() % (level * 7) + 1;
}

void success() {
	printf("\n >> Good! 정답입니다. \n");
}

void fail() {
	printf("\n >> Bad! 오답입니다. \n");
}