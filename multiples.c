#include<stdio.h>
int main()
{
	int fact=0,num,i;
	scanf("%d",&num);
	for(i=1;i<=5;i++)
	{
		fact=fact+num;
		printf("%d ",fact);
	}
}
