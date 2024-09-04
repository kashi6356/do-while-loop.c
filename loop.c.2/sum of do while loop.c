#include<stdio.h>

void main()
{
	int n,i,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("sum=%d+%d\n",sum,i);
	 sum=sum+1;
	 i++;	
	}
	while(i<=n);
}
