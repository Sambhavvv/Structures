#include<stdio.h>

struct employee

{

int e;

char name[50];

char designation[20];

char dept[20];

int sal;

};

int main()

{

struct employee a;

printf("Enter Your Employee Details: \n");

printf("-------------------------------\n");

printf("Enter Your Employee-Id: ");

scanf("%d", &a.e);

printf("Enter Your Employee Name: ");

scanf("%s", a.name);

printf("Enter Your Designation: ");

scanf("%s", a.designation);

printf("Enter Your Department: ");

scanf("%s", a.dept);

printf("Enter Your Salary: ");

scanf("%d", &a.sal);

printf("-------------------------------\n");

printf("Employee Details: ");

printf("\n-------------------------------\n");

printf("Employee-Id : %d\n", a.e);

printf("Name : %s\n", a.name);

printf("Designation : %s\n", a.designation);

printf("Department : %s\n", a.dept);

printf("Salary : %d\n", a.sal);

return 0;

}
