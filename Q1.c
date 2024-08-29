#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, int *argv[]) {
    
    int max = INT_MIN;

    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        if (num > max) {
            max = num;
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
