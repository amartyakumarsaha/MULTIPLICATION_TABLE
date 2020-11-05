#include<stdio.h>
int main(void)
{
	int i,n;
	printf("Enter the number whose table you want to find:-");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
			printf("%d X %d = %d",n,i,n*i);
			printf("\n");
	}
	return 0;
}
