#include <stdio.h>
struct employeeDetails {
    int emp_id;
    char name[100];
    char designation[100];
    int basic_salary;
    int hra;
    int da;
    int gross_salary;
};
int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct employeeDetails emp[n];
    for (int i = 0; i < n; i++) {
        printf("Enter employee ID: ");
        scanf("%d", &emp[i].emp_id);
        printf("Enter employee name: ");
        scanf("%s", emp[i].name);
        printf("Enter employee designation: ");
        scanf("%s", emp[i].designation);
        printf("Enter employee basic salary: ");
        scanf("%d", &emp[i].basic_salary);
        printf("Enter employee hra: ");
        scanf("%d", &emp[i].hra);
        printf("Enter employee da: ");
        scanf("%d", &emp[i].da);
        emp[i].gross_salary = emp[i].basic_salary + (emp[i].basic_salary * emp[i].hra / 100) + (emp[i].basic_salary * emp[i].da / 100);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("Employee number %d :\n", i+1);
        printf("\n");
        printf("Employee ID: %d\n", emp[i].emp_id);
        printf("Employee name: %s\n", emp[i].name);
        printf("Employee designation: %s\n", emp[i].designation);
        printf("Employee basic salary: %d\n", emp[i].basic_salary);
        printf("Employee hra: %d\n", emp[i].hra);
        printf("Employee da: %d\n", emp[i].da);
        printf("Employee's gross salary: %d", emp[i].gross_salary);
        printf("\n");
    }
    return 0;
}