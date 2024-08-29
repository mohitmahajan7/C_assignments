#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    int count[50]={0};
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++) {
        char ch = toupper(str[i]); 
        if (isalpha(ch)) {
            count[ch - 'A']++;
        }
    }

    printf("Output:\n");
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {  
            printf("%c : %d\n", i + 'A', count[i]);
        }
    }
    
    
    return 0;
}