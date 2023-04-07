#include <stdio.h> 
struct employee 
{
	char name[12];
	int age,dob;
	
}
int main()
{
	struct info x;
	printf("INPUT NAME\n");
	scanf("%s",&x.name);
	printf("INPUT AGE\n");
	scanf("%i",&x.age);
	printf("INPUT DOB\n");
	scanf("%i",&x.dob);
	printf("INPUT gpa\n");
	scanf("%f",&x.gpa);
	printf("NAME %s\n",x.name);
	printf("AGE %i\n",x.age);
	printf("dob %i\n",x.dob);
	printf("gpa %f\n",x.gpa);
	return 0;
}
