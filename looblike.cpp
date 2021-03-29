#include<stdio.h>
int main()
{
	int n,i,max=0,Max=0,F=0;
	scanf("%d",&n);
	int A[n],B[10000]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(A[i]!=0)
		{
			B[A[i]]++;
		//	printf("%d ",B[i]);
		}
	}
	for(i=1;i<=n;i++)
	{
		if(B[i]>Max)
		{
			Max=A[i];
		}
	}
/*	for(i=1;i<=max;i++)
	{
		printf("%d-%d\n",i,B[i]);
	}
	for(i=0;i<n;i++)
	{
		if(B[i]>Max)
		{
			Max=B[i];
			F=i;
		}
	}*/
	printf("%d",Max);
	return 0;
}
