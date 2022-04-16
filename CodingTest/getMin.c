#include <stdio.h>

int main(void) {
	int n[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int min = n[0];

	for (int i = 1; i < 10; i++) {
		if (min > n[i])
			min = n[i];
	}
	for (int i = 0; i < 10; i++) {
		if (min == n[i])
			printf("최소값 : %d\n위치 : %d\n", n[i], i + 1);
	}

	return 0;
}