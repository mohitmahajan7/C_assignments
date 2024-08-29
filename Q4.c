#include<stdio.h>
int main(){
    int a[5],total=0;
    float avg;
    char grade;
    for(int i=1; i<6; i++)
    {
        printf("Enter marks of SUbject %d : ",i);
        scanf("%d", &a[i]);
        total = total + a[i];
    }
    avg = total*100/500;
    if(avg>=90){
        grade = 'O';
    }
    else if(avg>=80 && avg<90){
        grade = 'A';
    }
    else if(avg>=70 && avg<80){
        grade = 'B';
    }
    else if(avg>=60 && avg<70){
        grade = 'C';
    }
    else{
        grade = 'F';
    }
    printf("Total marks obtained = %d",total);
    printf("\nTotal percentage obtained = %.2f",avg);
    printf("\nGrade obtained : %c",grade);

    return 0;
}