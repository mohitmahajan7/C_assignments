#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareStrings(const void* a, const void* b) {
    return strcmp((const char*)a, (const char*)b);
}

int main() {
    char nameOfStudents[10][50];
    int n;

    printf("Please enter the number of students (up to 10): ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Please enter a number between 1 and 10.\n");
        return 1;
    }

    printf("Enter the names of students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", nameOfStudents[i]);
    }

    qsort(nameOfStudents, n, sizeof(nameOfStudents[0]), compareStrings);

    printf("\nSorted list of names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
