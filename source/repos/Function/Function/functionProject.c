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
			printf("���α׷��� �����մϴ�.\n");
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

	printf("\n\n ---------����� 5���� ��й�ȣ �� %d���� �¾ҽ��ϴ�.---------\n", count);
}

void showQuestion(int i, int num1, int num2) {
	printf("\n\n\n######## %d �� ° ��й�ȣ ########\n", i);
	printf("\n\t%d x %d ��?\n\n", num1, num2);
	printf("\n\n\n###################################\n");
	printf("\n��й�ȣ�� �Է��ϼ��� (���� : -1) >>> ");
}

int getRandomNumber(int level) {
	return rand() % (level * 7) + 1;
}

void success() {
	printf("\n >> Good! �����Դϴ�. \n");
}

void fail() {
	printf("\n >> Bad! �����Դϴ�. \n");
}