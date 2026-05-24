#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef char String[1024];

int main(void) {
	printf("数値を入力してください\n");
	int ans = rand() % 100;
	int input;
	String inputStr;

	scanf("%d", inputStr);
	input = atoi(inputStr);
	if (input < ans) {
		printf("大きい");
	}
	else if (input > ans) {
		printf("小さい");
	}
	else {
		printf("ゲームクリア");
	}
	return 0;
}