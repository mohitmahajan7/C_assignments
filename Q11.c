#include <stdio.h>
#include <string.h>

struct emp {
    char first_name[50];
    char last_name[50];
    double monthly_salary;
};

void emp_init(struct emp* e, const char* first, const char* last, double salary) {
    strcpy(e->first_name, first);
    strcpy(e->last_name, last);
    e->monthly_salary = salary;
}

void set_salary(struct emp *e, double sal) {
    e->monthly_salary = sal;
}


void emp_display(struct emp *e) {
    printf("Employee Name: %s %s\n", e->first_name, e->last_name);
    printf("Monthly Salary: %.2lf\n", e->monthly_salary);
    printf("Yearly Salary: %.2lf\n\n", e->monthly_salary * 12);
}

int main() {
    struct emp emp1, emp2;


    printf("Enter details of first employee:\n");
    printf("Enter First Name: ");
    scanf("%s", emp1.first_name);
    printf("Enter Last Name: ");
    scanf("%s", emp1.last_name);
    printf("Enter Monthly Salary: ");
    scanf("%lf", &emp1.monthly_salary); 

    printf("Enter details of second employee:\n");
    printf("Enter First Name: ");
    scanf("%s", emp2.first_name);
    printf("Enter Last Name: ");
    scanf("%s", emp2.last_name);
    printf("Enter Monthly Salary: ");
    scanf("%lf", &emp2.monthly_salary);


    printf("Initial Salaries:\n");
    emp_display(&emp1);
    emp_display(&emp2);

   
    set_salary(&emp1, emp1.monthly_salary * 1.10);
    set_salary(&emp2, emp2.monthly_salary * 1.10);

    printf("Salaries after 10%% raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    return 0;
}
