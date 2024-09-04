#include<stdio.h>

void main()
{
	int n,i;
	printf("enter n:");
	scanf("%d",&n);
	i=1;
	do
	{
		i++;
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		
	}
	while(i<=n);
}
