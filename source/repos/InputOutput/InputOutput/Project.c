#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX 10000

void main() {
	char line[MAX];
	char contents[MAX];
	char password[20];
	char c;
	
	printf("'����ϱ�'�� ���� ���� ȯ���մϴ�.\n");
	printf("��й�ȣ�� �Է��ϼ��� : ");

	// getchar() : enter -> run
	// getch() : key input -> run
	int i = 0;
	while (1) {
		c = getch();
		if (c == 13) {
			password[i] = '\0';
			break;
		}
		else {
			printf("*");
			password[i] = c;
		}
		i++;
	}

	printf("\n\n ==== ��й�ȣ Ȯ�� �� ... ====\n\n");
	if (strcmp(password, "tjddjs") == 0) {
		printf(" === ��й�ȣ Ȯ�� �Ϸ� === \n\n");
		char* fileName = "C:\\Users\\qkrwh\\Desktop\\spw.txt";
		FILE* file = fopen(fileName, "a+b");

		if (file == NULL) {
			printf("���� ���� ����\n");
			return;
		}

		while (fgets(line, MAX, file) != NULL) {
			printf("%s", line);
		}

		printf("\n\n ������ ��� �ۼ��ϼ��� ! �����Ͻ÷��� EXIT �� �Է��ϼ��� \n\n");

		while (1) {
			scanf("%[^\n]", contents);
			getchar();

			if (strcmp(contents, "EXIT") == 0) {
				printf("����ϱ� �Է��� �����մϴ�\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file);
		}

		fclose(file);
	}
	else {
		printf(" === ��й�ȣ�� Ʋ�Ƚ��ϴ� === \n\n");
		printf(" ��!! ��� ������ ?!?!\n\n");
	}

}