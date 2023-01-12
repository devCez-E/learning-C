#include <stdio.h>

void basic_main() {
	//Pointer

	// [Jean] : 101
	// [Paul] : 201
	// [Marie] : 301
	// Passward --- Door
	
	int jean = 1;
	int paul = 2;
	int marie = 3;

	printf("Jean's address : %d, passward : %d\n", &jean, jean);
	printf("Paul's address : %d, passward : %d\n", &paul, paul);
	printf("Marie's address : %d, passward : %d\n", &marie, marie);


	printf("\n ... MISSION MAN 1 PERFORM THE MISSION ... \n\n");
	// Mission 1
	// Visit Door. And Check Passward.
	int* missionMan1; // pointer variable
	missionMan1 = &jean;
	printf("Mission Man 1 visit a door. Address is %d, Passward is %d\n", missionMan1, *missionMan1);

	missionMan1 = &paul;
	printf("Mission Man 1 visit a door. Address is %d, Passward is %d\n", missionMan1, *missionMan1);
	
	missionMan1 = &marie;
	printf("Mission Man 1 visit a door. Address is %d, Passward is %d\n", missionMan1, *missionMan1);


	// Mission 2
	// Multiply 3 each Address.
	printf("\n ... MISSION MAN 1 PERFORM THE MISSION ... \n\n");
	missionMan1 = &jean;
	*missionMan1 *= 3;
	printf("Mission Man 1 visit a door. Address is %d, Passward is %d\n", missionMan1, *missionMan1);

	missionMan1 = &paul;
	*missionMan1 *= 3;
	printf("Mission Man 1 visit a door. Address is %d, Passward is %d\n", missionMan1, *missionMan1);

	missionMan1 = &marie;
	*missionMan1 *= 3;
	printf("Mission Man 1 visit a door. Address is %d, Passward is %d\n", missionMan1, *missionMan1);


	// Spy 1
	// Minus 2 at MissionMan2's passward
	int* spy = missionMan1;
	printf("\n ... SPY PERFORM THE MISSION ... \n\n");
	spy = &jean;
	*spy -= 2;
	printf("SPY visit a door. Adress is %d, Passward is %d\n", spy, *spy);

	spy = &paul;
	*spy -= 2;
	printf("SPY visit a door. Adress is %d, Passward is %d\n", spy, *spy);

	spy = &marie;
	*spy -= 2;
	printf("SPY visit a door. Adress is %d, Passward is %d\n", spy, *spy);


	printf("\n ... JEAN, PAUL, MARIE VISIT OWN'S HOME ... ");
	printf("\n ... DAMN IT !! ... \n\n");
	printf("Jean's address : %d, passward : %d\n", &jean, jean);
	printf("Paul's address : %d, passward : %d\n", &paul, paul);
	printf("Marie's address : %d, passward : %d\n", &marie, marie);

	printf("\n ... SO.. What is MissionMan1 and SPY's address? ... \n\n");
	printf("MISSION MAN1's address : %d\n", &missionMan1);
	printf("SPY's address : %d\n", &spy);
}