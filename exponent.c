#include <stdio.h>

int main() 
{
	int N,k,i,temp;
	scanf("%d %d",&N,&k);
	temp=N;
	for(i=1;i<k;i++)
	{
		temp=temp*N;
	}
	printf("%d",temp);
}
