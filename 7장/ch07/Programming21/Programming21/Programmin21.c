#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n0, n1, x, type, N = 50, check = 0;     /*  N이 컴퓨터가 맞추는 숫자, x는 업 / 다운, type은 범위 구분,
                                                    n0이 범위에서 높은 숫자,  n1이 범위에서 낮은 숫자  */
    printf("컴퓨터가 당신이 생각하는 숫자를 알아맞히는 게임입니다. \n");
    printf("하나의 숫자를 생각하세요. \n");
    printf("컴퓨터가 제시한 숫자보다 정답이 높으면 1, 낮으면 -1라고 하세요. \n");
    printf("컴퓨터가 숫자를 맞히면 0라고 하세요. \n\n");

    printf("숫자가 %d인가요? ", N);
    scanf_s("%d", &x);

    n0 = n1 = N;

    switch (x) {
    case 1: //up | 100, 100, 50
        check++;
        type = 0;//최대
        N *= 2;
        n0 = N;
        break;
    case -1: //down | 25, 50, 25
        check--;
        type = 1;//최소
        N /= 2;
        n1 = N;
        break;
    }

    if (x != 0) {
        while (1) {
            if (type == 0 || type == 1) {
                printf("숫자가 %d인가요? ", N);
                scanf_s("%d", &x);

                switch (x) {
                case 1:
                    check++;
                    if (check != 0) {
                        check--;
                        n1 = N;
                        n0 = N *= 2;
                    }
                    else {
                        check++;
                        type = 2;
                        N = (n0 + n1) / 2;
                    }
                    break;

                case -1:
                    check--;
                    if (check != 0) {
                        check++;
                        n0 = N;
                        n1 = N /= 2;
                    }
                    else {
                        check--;
                        type = 2;
                        N = (n0 + n1) / 2;
                    }
                    break;
                }
                if (x == 0) { break; }
            }

            if (type == 0 || type == 1) { continue; }

            printf("숫자가 %d인가요? ", N);
            scanf("%d", &x);

            switch (x) {
            case 1:
                n1 = N;
                N = (n0 + n1) / 2;
                break;
            case -1:
                n0 = N;
                N = (n0 + n1) / 2;
                break;
            }
            if (x == 0) { break; }
        }
    }

    printf("당신이 생각한 숫자는 %d입니다. \n", N);
    return 0;
}