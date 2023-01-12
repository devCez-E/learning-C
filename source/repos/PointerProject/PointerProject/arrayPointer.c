#include <stdio.h>

void ap_main() {
	//Array
	int arr[3] = { 5, 10, 15 };
	int* ptr = arr;

	for (int i = 0; i < 3; i++) printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
	for (int i = 0; i < 3; i++) printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
	printf("\n");

	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;

	for (int i = 0; i < 3; i++) printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
	for (int i = 0; i < 3; i++) printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
	printf("\n");


	for (int i = 0; i < 3; i++) printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
	for (int i = 0; i < 3; i++) printf("포인터 *ptr[%d] 의 값 : %d\n", i, *ptr + i);
	printf("\n");

	// & is Address
	// * is & 's Value
	// *& is OFFSET
	printf("arr 자체의 값 : %d\n", arr);
	for (int i = 0; i < 3; i++) printf("&arr[%d]의 주소 의 값 : %d\n", i, &arr[0]);
	printf("\n");
	for (int i = 0; i < 3; i++) printf("*&arr[%d] 자체의 값이 가지는 주소의 실제 값 : %d\n", i, *&arr[i]);
	printf("\n");
}