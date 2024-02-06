#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint(void);

int main(void) {
    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++) {
        printf("%d ", randint());
    }

    return 0;
}

int randint(void) {
    return rand() % 81 + 10;
}