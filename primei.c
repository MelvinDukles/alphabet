#include <stdio.h>

int main() 
{
	int n,count=0,i,n1,j;
	scanf("%d %d",&n,&n1);
	for(i=n+1;i<n1;i++)
	{
	for(j=1;j<=i;j++)
	{
	if(i%j==0)
	{
		count++;
	}
	}
	if(count==2)
	printf("%d ",i);
	count=0;
	}
}
