#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char strings[n][50]; 

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        printf("String %d: ", i + 1);
        scanf("%s", strings[i]);
    }

    int foundDuplicate = 0;

    printf("Duplicate strings in the array are:\n");

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) == 0) {
                printf("%s\n", strings[i]);
                foundDuplicate = 1;
                break; 
            }
        }
    }

    if (!foundDuplicate) {
        printf("No duplicates found.\n");
    }

    return 0;
}
