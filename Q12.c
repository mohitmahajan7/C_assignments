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
    strcpy(str1,str);
    
    reverseString(str1);
    printf("Orignal string: %s", str);
    printf("Reversed string: %s", str1);
    

    return 0;
}