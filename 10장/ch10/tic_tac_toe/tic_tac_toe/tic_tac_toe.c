#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void display(char board[3][3]);		// ���� ��Ȳ�� �����ִ� �Լ�

int main(void) {
	char board[3][3];		// ���� 2�����迭 ����
	int x, y, k, i;

	srand((unsigned)time(NULL));

	// ���带 �ʱ�ȭ�Ѵ�.
	for (y = 0; y < 3; y++) {
		for (x = 0; x < 3; x++) {
			board[y][x] = ' ';
		}
	}

	// ����ڷκ��� ��ġ�� �޾Ƽ� ���忡 ǥ���Ѵ�.
	for (k = 0; k < 9; k++) {
		if (k % 2 == 0) {			// ����� ��
			printf("(x,y) ��ǥ: ");
			scanf("%d %d", &x, &y);

			if (board[x][y] != ' ') {
				while (board[x][y] != ' ') {
					printf("��Ⱑ ���� ��ǥ�� �Է��ϼ���.\n");
					printf("(x,y) ��ǥ: ");
					scanf("%d %d", &x, &y);
				}
			}
			board[x][y] = 'O';	// ����� �������� 'O'

			// ���带 ȭ�鿡 �׸���.
			display(board);
		}
		else {	// ��ǻ�� ��
			while (board[x][y] != ' ') {
				x = rand() % 3;
				y = rand() % 3;
			}
			printf("(x,y) ��ǥ: %d %d\n", x, y);
			board[x][y] = 'X';	// ��ǻ�� �������� 'X'

			// ���带 ȭ�鿡 �׸���.
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