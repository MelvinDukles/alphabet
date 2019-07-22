#include <stdio.h>

int main() 
{
	int a[100],i,N,K,sum=0;
	scanf("%d %d",&N,&K);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		if(i<K)
		sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
