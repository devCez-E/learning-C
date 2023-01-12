#include <stdio.h>
#include <time.h>

int level = 0;
int arrayFish[6];
int* cursor;
int num;

void initData();
void checkData();
void decreaseWater(long elapsedTime);

void main() {
	long startTime = 0;
	long totalElapsedTime = 0; // now time
	long prevElapsedTime = 0; // recent feed time

	int fishIdx;

	initData();
	
	cursor = arrayFish;

	startTime = clock(); // nowTime(ms)
	while (1) {
		checkData();
		printf("Select Fish : ");
		scanf_s("%d", &num);

		if (num < 1 || num > 6) {
			printf("\nWrong Number.\n\n");
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("\nTotal Elapsed Time : %ds\n", totalElapsedTime);

		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("Prev Elapsed Time : %ds\n", prevElapsedTime);

		decreaseWater(prevElapsedTime);

		if (cursor[num - 1] <= 0) printf("\nFish Is Already Dead. ... Select Another Fish\n");
		else if (cursor[num - 1] + 1 <= 100) {
			printf("\nFeed %d's Fish.\n\n", num);
			cursor[num - 1] += 1;
		}

		if (totalElapsedTime / 20 > level - 1) {
			level++;
			printf("\n *** Congratulation! Level UP!! ***\nUpgrade Level : %d ---> Level : %d\n\n", level - 1, level);

			if (level == 5) printf("\n *** Congratulation! Reach The Highest Level!! *** ");
		}

		if (checkFishAchieve() == 0) {
			printf("\n **** All Fishes are dead ****");
			exit(0);
		}

		prevElapsedTime = totalElapsedTime;
	}
}

void initData() {
	level = 0;
	int size = (sizeof(arrayFish) / sizeof(arrayFish[0]));
	for (int i = 0; i < size; i++) arrayFish[i] = 100;
}

void checkData() {
	int size = (sizeof(arrayFish) / sizeof(arrayFish[0]));
	printf("\n===============================\n\n");
	printf("No.%d No.%d No.%d No.%d No.%d No.%d\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < size; i++) printf(" %2d ", arrayFish[i]);
	printf("\n\n");
}

void decreaseWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * elapsedTime);
		if (arrayFish[i] < 0) arrayFish[i] = 0;
	}
}

int checkFishAchieve(void) {
	int size = (sizeof(arrayFish) / sizeof(arrayFish[0]));
	for (int i = 0; i < size; i++) {
		if (arrayFish[i] > 0) return 1;
	}
	return 0;
}