#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n0, n1, x, type, N = 50, check = 0;     /*  N�� ��ǻ�Ͱ� ���ߴ� ����, x�� �� / �ٿ�, type�� ���� ����,
                                                    n0�� �������� ���� ����,  n1�� �������� ���� ����  */
    printf("��ǻ�Ͱ� ����� �����ϴ� ���ڸ� �˾Ƹ����� �����Դϴ�. \n");
    printf("�ϳ��� ���ڸ� �����ϼ���. \n");
    printf("��ǻ�Ͱ� ������ ���ں��� ������ ������ 1, ������ -1��� �ϼ���. \n");
    printf("��ǻ�Ͱ� ���ڸ� ������ 0��� �ϼ���. \n\n");

    printf("���ڰ� %d�ΰ���? ", N);
    scanf_s("%d", &x);

    n0 = n1 = N;

    switch (x) {
    case 1: //up | 100, 100, 50
        check++;
        type = 0;//�ִ�
        N *= 2;
        n0 = N;
        break;
    case -1: //down | 25, 50, 25
        check--;
        type = 1;//�ּ�
        N /= 2;
        n1 = N;
        break;
    }

    if (x != 0) {
        while (1) {
            if (type == 0 || type == 1) {
                printf("���ڰ� %d�ΰ���? ", N);
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

            printf("���ڰ� %d�ΰ���? ", N);
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

    printf("����� ������ ���ڴ� %d�Դϴ�. \n", N);
    return 0;
}