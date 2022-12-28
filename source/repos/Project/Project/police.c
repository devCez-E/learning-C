#include<stdio.h>

int police(void) {

	char name[256];	
	int age;
	float weight;
	float height;
	char crimeName[256];

	scanf_s("이름이 뭐에요? %s", name, sizeof(name));
	scanf_s("나이가 어떻게 되요? %d\n", &age);
	scanf_s("몸무게가 몇이에요? %f\n", &weight);
	scanf_s("키가 어떻게 되요? %f\n", &height);
	scanf_s("범죄명은? %s\n", crimeName, sizeof(crimeName));

	printf("--------범죄자 조서--------\n");
	printf("이름 :		%s", name);
	printf("나이 :		%d", age);
	printf("몸무게 :	%.2f", weight);
	printf("키 :		%.2f", height);
	printf("범죄명 :	%s", crimeName);

	return 0;
}