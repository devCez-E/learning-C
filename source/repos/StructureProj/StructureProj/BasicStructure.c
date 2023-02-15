#include <stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo * friendGame;
};

typedef struct {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
} GAME_INFO;

void Basic();
void InnerStruct();
void TypeDef();

void _main() {
	Basic();
	InnerStruct();
	TypeDef();
}

void Basic() {
	// [���� ���]
	// �̸� : ŷ�����
	// �߸ų⵵ : 2022
	// ���� : 100��
	// ���ۻ� : ŷ��

	struct GameInfo game1;
	game1.name = "ŷ�����";
	game1.year = 2022;
	game1.price = 100;
	game1.company = "ŷ��";

	printf("--- ���� ��� ���� ---\n");
	printf("    ���Ӹ�  :  %s\n", game1.name);
	printf("  �߸ų⵵  :  %d\n", game1.year);
	printf("      ����  :  %d\n", game1.price);
	printf("    ���ۻ�  :  %s\n", game1.company);

	// [�Ǵٸ� ���� ���]
	// �̸� : �������
	// �߸ų⵵ : 2023
	// ���� : 200��
	// ���ۻ� : ����

	printf("\n\n");

	struct GameInfo game2 = {"�������", 2023, 200, "����"};

	printf("--- ���� ��� ���� ---\n");
	printf("    ���Ӹ�  :  %s\n", game2.name);
	printf("  �߸ų⵵  :  %d\n", game2.year);
	printf("      ����  :  %d\n", game2.price);
	printf("    ���ۻ�  :  %s\n", game2.company);

	// ����ü �迭
	struct GameInfo gameArray[2] = { 
		{"ŷ�����", 2022, 100, "ŷ��"},
		{"�������", 2023, 200, "����"}
	};

	printf("\n\n");

	// ����ü ������
	struct GameInfo* gamePtr;
	gamePtr = &game1;
	printf("--- ���� ��� ���� (������ ��) ---\n");
	printf("    ���Ӹ�  :  %s\n", (*gamePtr).name);
	printf("  �߸ų⵵  :  %d\n", (*gamePtr).year);
	printf("      ����  :  %d\n", (*gamePtr).price);
	printf("    ���ۻ�  :  %s\n", (*gamePtr).company);

	printf("\n\n");

	struct GameInfo* gamePt;
	gamePt = &game2;
	printf("--- ���� ��� ���� (������ ��) ---\n");
	printf("    ���Ӹ�  :  %s\n", gamePt-> name);
	printf("  �߸ų⵵  :  %d\n", gamePt-> year);
	printf("      ����  :  %d\n", gamePt-> price);
	printf("    ���ۻ�  :  %s\n", gamePt-> company);

	printf("\n\n");
}

void InnerStruct() {
	struct GameInfo temp;
	temp.name = "�������";
	temp.year = 2021;
	temp.price = 50;
	temp.company = "����";

	struct GameInfo game;
	game.name = "�������";
	game.year = 2023;
	game.price = 200;
	game.company = "����";
	game.friendGame = &temp;

	printf("--- ������ü ���� (Inner Struct) ---\n");
	printf("    ���Ӹ�  :  %s\n", game.friendGame -> name);
	printf("  �߸ų⵵  :  %d\n", game.friendGame -> year);
	printf("      ����  :  %d\n", game.friendGame -> price);
	printf("    ���ۻ�  :  %s\n", game.friendGame -> company);
}

void TypeDef() {
	// �Ϲ� �ڷ���
	int i = 1;
	typedef int ����;
	typedef float �Ǽ�;

	���� intType = 3;
	�Ǽ� floatType = 3.14f;

	printf("\n\n�������� : %d, �Ǽ����� %.2f\n\n", intType, floatType);

	// ����ü
	typedef struct GameInfo ��������;
	�������� game1;
	GAME_INFO gameInfo;
}