#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void display(char board[3][3]);		// 게임 상황을 보여주는 함수

int main(void) {
	char board[3][3];		// 문자 2차원배열 선언
	int x, y, k, i;

	srand((unsigned)time(NULL));

	// 보드를 초기화한다.
	for (y = 0; y < 3; y++) {
		for (x = 0; x < 3; x++) {
			board[y][x] = ' ';
		}
	}

	// 사용자로부터 위치를 받아서 보드에 표시한다.
	for (k = 0; k < 9; k++) {
		if (k % 2 == 0) {			// 사용자 턴
			printf("(x,y) 좌표: ");
			scanf("%d %d", &x, &y);

			if (board[x][y] != ' ') {
				while (board[x][y] != ' ') {
					printf("장기가 없는 좌표를 입력하세요.\n");
					printf("(x,y) 좌표: ");
					scanf("%d %d", &x, &y);
				}
			}
			board[x][y] = 'O';	// 사용자 순번에는 'O'

			// 보드를 화면에 그린다.
			display(board);
		}
		else {	// 컴퓨터 턴
			while (board[x][y] != ' ') {
				x = rand() % 3;
				y = rand() % 3;
			}
			printf("(x,y) 좌표: %d %d\n", x, y);
			board[x][y] = 'X';	// 컴퓨터 순번에는 'X'

			// 보드를 화면에 그린다.
			display(board);
		}
	}

	return 0;
}

void display(char board[3][3]) {
	for (int i = 0; i < 3; i++) {
		printf("---|---|---\n");
		printf(" %c | %c | %c\n", board[i][0], board[i][1], board[i][2]);
	}
	printf("---|---|---\n\n");
}