#include <stdio.h>
#include <time.h>

int main(void) {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, key;
	//srand(time(NULL));

	printf("1~10사이의 숫자를 입력하세요\n");
	scanf("%d", &key);

	//key = (rand() % 10) + 1;

	for (i = 0; i < 10; i++) {
		if (key == arr[i])
			break;
	}

	if (i < 10) {
		printf("%d 숫자는 %d번째 있습니다.", key, ++i);
	}
	else {
		printf("결과를 찾을 수 없습니다.");
	}

	return 0;
}

/*
int n[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, su;
	scanf("%d", &su);

	for (i = 0; i < 10; i++) {
		if (su == n[i]) {
			printf("값이 있습니다\n"); break;
		}
		else printf("찾는 값이 없습니다. \n"); break;
	}
*/