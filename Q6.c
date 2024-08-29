#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    int first[10][10], second[10][10], result[10][10];

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d%d", &m, &n);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d%d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("First[%d][%d]: ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("Second[%d][%d]: ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            result[i][j] = 0;
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
