#include <stdio.h>
#include <time.h>

int main(void) {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, key;
	//srand(time(NULL));

	printf("1~10������ ���ڸ� �Է��ϼ���\n");
	scanf("%d", &key);

	//key = (rand() % 10) + 1;

	for (i = 0; i < 10; i++) {
		if (key == arr[i])
			break;
	}

	if (i < 10) {
		printf("%d ���ڴ� %d��° �ֽ��ϴ�.", key, ++i);
	}
	else {
		printf("����� ã�� �� �����ϴ�.");
	}

	return 0;
}

/*
int n[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, su;
	scanf("%d", &su);

	for (i = 0; i < 10; i++) {
		if (su == n[i]) {
			printf("���� �ֽ��ϴ�\n"); break;
		}
		else printf("ã�� ���� �����ϴ�. \n"); break;
	}
*/