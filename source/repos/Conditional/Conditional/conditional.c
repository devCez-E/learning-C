#include <stdio.h>
#include <time.h>

int main(void) {
	SwitchCase();
}

int IfElse(void) {
	int age = 22;

	if (age >= 20) printf("�Ϲ����Դϴ�.");
	else if (age >= 17 && age <= 19) printf("����л��Դϴ�.");
	else if (age >= 14 && age <= 16) printf("���л��Դϴ�.");
	else if (age >= 8 && age <= 13) printf("�ʵ��л��Դϴ�.");
	else printf("�����оƵ��Դϴ�.");

	return 0;
}

int Break(void) {
	for (int i = 1; i <= 20; i++) {
		if (i >= 6) {
			printf("������ �л��� ���� ������\n");
			break;
		}
		printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
	}
}

int Continue(void) {
	for (int i = 1; i <= 20; i++) {
		if (i >= 6 && i<= 10) {
			if (i == 7) {
				printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
		}
	}
}

int SwitchCase(void) {

	srand(time(NULL));

	int i = rand() % 3;

	switch (i) {
		case 0: printf("����\n"); break;
		case 1: printf("����\n"); break;
		case 2: printf("��\n"); break;
		default: printf("�����\n"); break;
	}
	
	return 0;
}