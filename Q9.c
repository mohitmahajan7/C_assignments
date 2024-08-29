#include<stdio.h>
void binnary(int x) {
    int binarynum[50];
    int i = 0;

    while (x > 0) {
        binarynum[i] = x % 2;
        x = x / 2;
        i++;
    }

    printf("\nBinary Equivalent: ");
    if (i == 0) {
        printf("0");
    } else {
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binarynum[j]);
        }
    }
}
void Octal(int x){
    if (x >= 8) {
        Octal(x / 8);
    }
    printf("%d", x % 8);
}

void Hexa(int x) {
    if (x >= 16) {
        Hexa(x / 16);
    }
    int remainder = x % 16;
    if (remainder < 10) {
        printf("%d", remainder);
    } else {
        printf("%c", 'A' + remainder - 10);
    }
}

int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Given Number : %d",a);
    binnary(a);
    printf("\nOctal Equivalent : ");
    Octal(a);
    printf("\nHexadecimal Equivalent : ");
    Hexa(a);

    return 0;
}