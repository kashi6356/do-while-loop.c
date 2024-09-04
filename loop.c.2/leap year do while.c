#include<stdio.h>

void main()
{
	int start=2000;
	int end=3000;
	do
	{
		start++;
	 if(start%4==0)	
	 {
	 	printf("%d\n",start);
	 }
	}
	while(start<=end);
}
