#include<stdio.h>
#include<string.h>
struct Student
{
    char name[50];
    char roll_no[50];
    float total_marks;

};

int main(){
    
    struct Student s1;

    printf("Enter student details : \n");
    printf("Enter student's name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    printf("Enter roll number: ");
    scanf("%s", &s1.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s1.total_marks);
    
    printf("\nStudent Details:\n");
    printf("Name: %s", s1.name);
    printf("Roll Number: %s\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.total_marks);
    
    return 0;
}