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
	// [게임 출시]
	// 이름 : 킹토게임
	// 발매년도 : 2022
	// 가격 : 100원
	// 제작사 : 킹토

	struct GameInfo game1;
	game1.name = "킹토게임";
	game1.year = 2022;
	game1.price = 100;
	game1.company = "킹토";

	printf("--- 게임 출시 정보 ---\n");
	printf("    게임명  :  %s\n", game1.name);
	printf("  발매년도  :  %d\n", game1.year);
	printf("      가격  :  %d\n", game1.price);
	printf("    제작사  :  %s\n", game1.company);

	// [또다른 게임 출시]
	// 이름 : 락토게임
	// 발매년도 : 2023
	// 가격 : 200원
	// 제작사 : 락토

	printf("\n\n");

	struct GameInfo game2 = {"락토게임", 2023, 200, "락토"};

	printf("--- 게임 출시 정보 ---\n");
	printf("    게임명  :  %s\n", game2.name);
	printf("  발매년도  :  %d\n", game2.year);
	printf("      가격  :  %d\n", game2.price);
	printf("    제작사  :  %s\n", game2.company);

	// 구조체 배열
	struct GameInfo gameArray[2] = { 
		{"킹토게임", 2022, 100, "킹토"},
		{"락토게임", 2023, 200, "락토"}
	};

	printf("\n\n");

	// 구조체 포인터
	struct GameInfo* gamePtr;
	gamePtr = &game1;
	printf("--- 게임 출시 정보 (포인터 ⓐ) ---\n");
	printf("    게임명  :  %s\n", (*gamePtr).name);
	printf("  발매년도  :  %d\n", (*gamePtr).year);
	printf("      가격  :  %d\n", (*gamePtr).price);
	printf("    제작사  :  %s\n", (*gamePtr).company);

	printf("\n\n");

	struct GameInfo* gamePt;
	gamePt = &game2;
	printf("--- 게임 출시 정보 (포인터 ⓑ) ---\n");
	printf("    게임명  :  %s\n", gamePt-> name);
	printf("  발매년도  :  %d\n", gamePt-> year);
	printf("      가격  :  %d\n", gamePt-> price);
	printf("    제작사  :  %s\n", gamePt-> company);

	printf("\n\n");
}

void InnerStruct() {
	struct GameInfo temp;
	temp.name = "협토게임";
	temp.year = 2021;
	temp.price = 50;
	temp.company = "협토";

	struct GameInfo game;
	game.name = "락토게임";
	game.year = 2023;
	game.price = 200;
	game.company = "락토";
	game.friendGame = &temp;

	printf("--- 연관업체 정보 (Inner Struct) ---\n");
	printf("    게임명  :  %s\n", game.friendGame -> name);
	printf("  발매년도  :  %d\n", game.friendGame -> year);
	printf("      가격  :  %d\n", game.friendGame -> price);
	printf("    제작사  :  %s\n", game.friendGame -> company);
}

void TypeDef() {
	// 일반 자료형
	int i = 1;
	typedef int 정수;
	typedef float 실수;

	정수 intType = 3;
	실수 floatType = 3.14f;

	printf("\n\n정수변수 : %d, 실수변수 %.2f\n\n", intType, floatType);

	// 구조체
	typedef struct GameInfo 게임정보;
	게임정보 game1;
	GAME_INFO gameInfo;
}