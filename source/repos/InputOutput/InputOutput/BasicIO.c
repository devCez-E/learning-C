#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void ReadFile();
void WriteFile();
void ReadFile_Another();
void WriteFile_Another();

#define MAX 10000

char line[MAX];
char str1[MAX];
char str2[MAX];

void IO_main() {
	//WriteFile();
	//ReadFile();
	//WriteFile_Another();
	ReadFile_Another();
}

void WriteFile() {
	FILE* file = fopen("C:\\Users\\qkrwh\\Desktop\\test1.txt", "wb");
	if (file == NULL) {
		printf("���� ���� ����\n");
		return;
	}

	fputs("fputs �� �̿��ؼ� ���� ����Կ�\n", file);
	fputs("�� �������� Ȯ�����ּ���\n", file);

	fclose(file);
}


void ReadFile() {
	FILE* file = fopen("C:\\Users\\qkrwh\\Desktop\\test1.txt", "rb");
	if (file == NULL) {
		printf("���� ���� ����\n");
		return;
	}

	while (fgets(line, MAX, file) != NULL) {
		printf("%s", line);
	}
}

void WriteFile_Another() {
	FILE* file = fopen("C:\\Users\\qkrwh\\Desktop\\test2.txt", "wb");
	if (file == NULL) {
		printf("���� ���� ����\n");
		return;
	}

	fprintf(file, "%s %d %d %d %d %d %d\n", "��÷��ȣ ", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n", "���ʽ���ȣ ", 7);

	fclose(file);
}

void ReadFile_Another() {
	int num[6] = { 0,0,0,0,0,0 };
	int bonus = 0;

	FILE* file = fopen("C:\\Users\\qkrwh\\Desktop\\test2.txt", "rb");
	if (file == NULL) {
		printf("���� ���� ����\n");
		return;
	}

	fscanf(file, "%s %d %d %d %d %d %d", &str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d", &str2, &bonus);
	printf("%s %d", str2, bonus);

	fclose(file);
}