#include <stdio.h>

void basicArray();
void character_string();
void input_string();

void array_main() {
	//basicArray();
	//character_string();
	input_string();
}

void basicArray() {
	int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("subway_array[%d] is %d\n", i, subway_array[i]);
	}
}

void valueArray() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10];

	int arr3[] = { 1, 2 };

	float arr4[5] = { 1.0f, 2.0f, 3.0f };
}

void character_string() {
	char c = 'A';
	printf("%c\n", c);

	char str1[7] = "coding"; // [c][o][d][i][n][g][\0]
	printf("%s\n", str1);

	char str2[] = "coding";
	printf("String : %s\n", str2);
	printf("Size : %d\n", sizeof(str2));
}

void input_string() {
	char name[256];
	printf("이름을 입력하세요 : ");
	scanf_s("%s", name, sizeof(name));
	printf("\n이름 : %s\n", name);
}