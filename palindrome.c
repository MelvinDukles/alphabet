#include <stdio.h>

int main() 
{
	int n,temp,rev=0,a;
	scanf("%d",&n);
	temp=n;
	a=n;
	while(n!=0)
	{
		temp=n%10;
		rev=rev*10+temp;
		n=n/10;
	}
	if(rev==a)
	printf("yes");
	else
	printf("no");
}
