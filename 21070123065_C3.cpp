#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()

{

int n, flag=0, i, C;

while(1)

{

printf("\n1 Prime number");

printf("\n2. Even or Odd");

printf("\n3. Exit");

printf("\nEnter your choice: ");

scanf("%d", &C);

switch(C)

{

case 1:

printf("\nEnter a number: ");

scanf("%d",&n);

for (i=2;i<=sqrt(n);i++)

{

if(n%i==0)

{

flag=1;

break;

}

}

if(flag==1)

{

printf("\nThe number is not a prime number");

}

else

{

printf("\nThe number is a prime number");

}

break;

case 2:

printf("\nEnter a number: ");

scanf("%d",&n);

if(n%2==0)

{

printf("\nThe number is Even");

}

else

{printf("\nThe number i Odd");

}

break;

case 3:

exit(0);

default:

printf("\nPlease enter a valid number");

}

}

return 0;
}
