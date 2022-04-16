#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char s1[7][10] = { "한국","미국","일본","영국","독일","호주","독일" };
	char key[] = { "독일" };
	// 오름차순(계단) 1 -> 10
	// 내림차순(계단) 10 -> 1

	// strcmp(a,b)는 0, 1, -1을 리턴
	// a == b 같다 즉, 같은 단어다 = 0
	// a > b a가 사전에서 b보다 먼저나왔을 경우 = 1
	// a < b a가 사전에서 b보다 나중에 나온다. = -1
	// int len = strlen(21); 변수 값 선언하여 사용하는게 효율적

	for (int i = 0; i < 7; i++) {
		printf("%s\n", s1[i]);
		if (strcmp(key, s1[i]) == 0) {
			printf("%d번째 독일이 있습니다.", i+1);
			break;
		}
	}
	
}