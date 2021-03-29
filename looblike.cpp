#include<stdio.h>
int main()
{
	int n,i,max=0,Max=0,F=0,X;
	scanf("%d",&n);
	int A[n],B[10000]={0},C[10000]={0};
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
/*	for(i=1;i<=n+max;i++)
	{
			printf("%d ",B[i]);
	}*/
	for(i=1;i<=n+max;i++)
	{
		if(B[i]>=Max)
		{
			Max=i;
			X=B[i];
		//	printf(",%d ",Max);
		}
	}
	for(i=1;i<=n+max;i++)
	{
		if(B[i]==X)
		{
			C[i]=i;
		}
	}
    for(i=1;i<=n+max;i++)
	{
		if(C[i]!=0)
		printf("%d ",C[i]);
	}  
	return 0;
}
