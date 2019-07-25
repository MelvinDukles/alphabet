#include <stdio.h>

int main() 
{
	int n,count=0,i,n1;
	scanf("%d %d",&n,&n1);
	for(i=n+1;i<n1;i++)
	if(i%2==0)
	printf("%d ",i);
}
