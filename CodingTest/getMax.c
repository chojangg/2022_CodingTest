#include <stdio.h>

int main(void) {
	int arr[10] = { 2,5,78,43,-45,68,31,100,45,23 };
	int max = 0;
	int i, maxPosition;

	for (i = 0; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxPosition = i;
		}
	}
	printf("최대값 : %d, 위치 : %d\n", max, ++maxPosition);
	return 0;
}
/*
for (int i = 1; i < 10; i++) {
		if (max < n[i])
			max = n[i];
	}
	for (int i = 0; i < 10; i++) {
		if (max == n[i])
			printf("위치 : %d\n", i+1);
	}

*/
