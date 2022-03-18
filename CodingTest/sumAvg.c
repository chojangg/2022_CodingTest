#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int i, n[10];
	int sum = 0;
	srand(time(NULL));

	// ·£´ı¼ö ÀúÀå
	for (i = 0; i < sizeof(n) / sizeof(int); i++) {
		n[i] = (rand() % 100) + 1;
		printf("%d ", (rand() % 100) + 1);
	}

	// ÇÕ°è
	for (int i = 0; i < 10; i++) {
		sum += n[i];
	}

	// Æò±Õ
	printf("ÇÕ°è : %d, Æò±Õ : %.1f", sum, sum / 10.0);
}