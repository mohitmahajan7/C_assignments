#include <stdio.h>
#include <stdlib.h>

int main(int argc, int *argv[]) {

    if (argc != 2) {
        printf("Usage: %s\n", argv[0]);
        return 1;
    }

    int num = atoi(argv[1]);

    if (num == 0 && argv[1][0] != '0') {
        printf("Invalid number: %s\n", argv[1]);
        return 1;
    }

    printf("Multiplication Table for %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
