#include <stdio.h>
#include<time.h>

typedef struct {
	char* name;
	int age;
	char* character;
	int level;
} CAT;

void InitCats();
void printCat(int select);

int checkCollection();
int collection[5] = { 0,0,0,0,0 };

CAT cats[5];

void main() {
	srand(time(NULL));
	InitCats();

	while (1) {
		printf("�αٵα�-! ��� ������� ���簡 �ɱ��?\n�ƹ� Ű�� ������ Ȯ���ϼ���!");
		getchar();

		int select = rand() % 5;
		printCat(select);
		collection[select] = 1;

		int collectAll = checkCollection();
		if (collectAll == 1) {
			printf("�����մϴ�! ��� ����̸� �� ��Ҿ��. ������ Ű���ּ���\n\n ");
			break;
		}
	}
}

void InitCats() {
	cats[0].name = "����";
	cats[0].age = 5;
	cats[0].character = "�¼�";
	cats[0].level = 1;

	cats[1].name = "�Ϳ��";
	cats[1].age = 3;
	cats[1].character = "��ī��";
	cats[1].level = 2;

	cats[2].name = "������";
	cats[2].age = 7;
	cats[2].character = "�Ḹ��";
	cats[2].level = 3;

	cats[3].name = "�����";
	cats[3].age = 2;
	cats[3].character = "�ò�����";
	cats[3].level = 4;

	cats[4].name = "�ų���";
	cats[4].age = 1;
	cats[4].character = "�����";
	cats[4].level = 5;
}

void printCat(int select) {
	printf("\n\n=== ����� �� ������� ���簡 �Ǿ����! ===\n\n");
	printf(" �̸�          : %s\n", cats[select].name);
	printf(" ����          : %d\n", cats[select].age);
	printf(" Ư¡(����)    : %s\n", cats[select].character);
	printf(" ����          : ");

	for (int i = 0; i < cats[select].level; i++) {
		printf("%s", "��");
	}

	printf("\n\n");
}

int checkCollection() {
	int collectAll = 1;

	printf("\n\n === ������ ����� ����̿��� === \n\n");
	for (int i = 0; i < 5; i++) {
		if (collection[i] == 0) {
			printf("%10s", "(��ڽ�)");
			collectAll = 0;
		}
		else {
			printf("%10s", cats[i].name);
		}
	}

	printf("\n\n=================\n\n");

	return collectAll;
}