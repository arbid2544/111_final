#include<stdio.h>
int main()
{
    int n,c,i,k;
	scanf("%d %d",&n,&c);
    /*if(c<10&&c>0)
    {
    	k=10;
	}
	else if(c<100&&c>=10)
	{
		k=100;
	}
	else if(c<1000&&c>=100)
	{
		k=1000;
	}
	else if(c<10000&&c>=1000)
	{
		k=10000;
	}*/
	for(i=n;i<n+10;i++)
	{
		if(i%10==c)
		printf("%d",i);
	}
	return 0;
}
