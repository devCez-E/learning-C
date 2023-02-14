#include <stdio.h>
#include <time.h>

void initArray();
void initData();
void setAnimals();
void printAnimals();
void printQuestion();

int getEmptyPostion();
int conv_pos_x(int pos);
int conv_pos_y(int pos);
int foundAllAnimals();

int animals[4][5];
int checkAnimal[4][5];
char* strAnimal[10];

void main() {
	srand(time(NULL));

	initArray();
	initData();
	setAnimals();

	int failCount = 0;

	while (1) {
		int selectx = 0;
		int selecty = 0;

		printAnimals();
		printQuestion();
		
		printf("뒤집을 카드를 2개 고르세요 : ");
		scanf_s("%d %d", &selectx, &selecty);

		if (selectx == selecty) continue;

		int firstSelectx = conv_pos_x(selectx);
		int firstSelecty = conv_pos_y(selectx);
		int secondSelectx = conv_pos_x(selecty);
		int secondSelecty = conv_pos_y(selecty);

		if (checkAnimal[firstSelectx][firstSelecty] == 0 
			&& checkAnimal[secondSelectx][secondSelecty] 
			&& animals[firstSelectx][firstSelecty] == animals[secondSelectx][secondSelecty]) 
		{
			printf("\n\n빙고! : %s 발견\n\n", strAnimal[animals[firstSelectx][firstSelecty]]);
			checkAnimal[firstSelectx][firstSelecty] = 1;
			checkAnimal[secondSelectx][secondSelecty] = 1;
		}
		else {
			printf("\n\n 땡 !! ##틀렸거나, 이미 뒤집힌 카드입니다## \n");
			printf("%d : %s\n", selectx, strAnimal[animals[firstSelectx][firstSelecty]]);
			printf("%d : %s\n", selecty, strAnimal[animals[secondSelectx][secondSelecty]]);
			printf("\n\n");

			failCount++;
		}

		if (foundAllAnimals() == 1) {
			printf("\n\n 축하합니다 ! 모든 동물을 다 찾았네요. \n");
			printf("지금까지 총 %d 번 실수하였습니다.\n", failCount);
			break;
		}
	}
}

void initArray() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			animals[i][j] = -1;
		}
	}
}

void initData() {
	strAnimal[0] = "Monkey";
	strAnimal[1] = "Hippo";
	strAnimal[2] = "Puppy";
	strAnimal[3] = "Cat";
	strAnimal[4] = "Pig";

	strAnimal[5] = "Elephant";
	strAnimal[6] = "Kangaroo";
	strAnimal[7] = "Tiger";
	strAnimal[8] = "Bear";
	strAnimal[9] = "Mouse";
}

void setAnimals() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 2; j++) {
			int pos = getEmptyPostion();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			animals[x][y] = i;
		}
	}
}

int getEmptyPostion() {
	while (1) {
		int randPos = rand() % 20;

		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (animals[x][y] == -1) return randPos;

		return 0;
	}
}

int conv_pos_x(int pos) {
	return pos / 5;
}

int conv_pos_y(int pos) {
	return pos % 5;
}

void printAnimals() {
	printf("\n======== 몰래 보는 정답지 =======\n\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%8s", strAnimal[animals[i][j]]);
		}
		printf("\n");
	}
	printf("\n==============================\n\n");
}

void printQuestion() {
	printf("\n\n === <문제> ===\n");
	int seq = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) 
		{
			if (checkAnimal[i][j] != 0) {
				printf("%8s", strAnimal[animals[i][j]]);
			} else {
				printf("%8d", seq++);
			}
		}
		printf("\n");
	}
}

int foundAllAnimals() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			if (checkAnimal[i][j] == 0) return 0;
		}
	}

	return 1;
}