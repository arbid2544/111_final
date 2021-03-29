#include<stdio.h>
int main()
{
	int n,c,i;
	scanf("%d %d",&n,&c);
	for(i=n;i<n+10;i++)
	{
		if(i%10==c)
		printf("%d",i);
	}
	return 0;
}
