#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>='A' && ch <='Z'){
        printf("%c is Uppercase",ch);
    }
    else if(ch>='a' && ch <='z'){
        printf("'%c' is Lowercase",ch);
    }
    else if(ch>='0' && ch <='9'){
        printf("'%c' is Number",ch);
    }
    else{
        printf("'%c' is Other characters",ch);
    }
    return 0;
}