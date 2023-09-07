#include <stdlib.h>

#define DIM1    512
#define DIM2    512
#define DIM3    512

int matrix[DIM1][DIM2][DIM3];

int main(void) {
	int i, j, k;

	srand(1);

	for (i = 0; i < DIM1; i++) {
		for (j = 0; j < DIM2; j++) {
			for (k = 0; k < DIM3; k++) {
				matrix[j][k][i] = rand();
			}
		}
	}
}
