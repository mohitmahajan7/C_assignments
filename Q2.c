#include<stdio.h>
int main(){
    int num;
    printf("Please enter a number : ");
    scanf("%d",&num);
    int fact = 1;
    for(int i = num; i>=1; i--)
    {
        fact = fact * i;
    }
    printf("Factorial on %d = %d",num,fact);
    return 0;
}