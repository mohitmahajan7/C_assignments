#include<stdio.h>
#include<string.h>
void reverseString(char* str) {

    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while (start < end) {
      
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}
int main(){
    char str[50];
    char str1[50];
    printf("Enter a String : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    strcpy(str1,str);
    
    reverseString(str);
    printf("Orignal string: %s\n", str1);
    printf("Reversed string: %s\n", str);
    if (strcmp(str, str1) == 0) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}