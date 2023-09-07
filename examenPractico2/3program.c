#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

// TODO: Substitute this by your DNI without letters
#define DNI  XXXXXXXX

char array[DNI];
void dummyFunction();

// TODO: Define any additional global variable here below



int main(void) {
	char vector[DNI % 4];
	double real = 2.3;
	int * memory = malloc (DNI / 2);

	// TODO: Add any additional code you may need here below



	// Show PID on screen
	printf("\nProcess Identifier (PID): %d\n", getpid());

	// Press ENTER to finish the execution
	printf("\n---- Press [ENTER] to continue");
	getchar();
	return 0;
}


void dummyFunction() {
	// Do nothing
}

