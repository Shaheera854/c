#include<stdio.h>
void main()
{
	int x,y,i=1;
	printf("Enter a number ");
	scanf("%d",&y);
	printf("Factorial of %d is:",y);
	for(x=1;y>=x;x++)
	{
		i*=x;
		printf(" %d *",x);
	}
	printf("\nFactorial of %d is %d",y,i);
}