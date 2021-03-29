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
	for(i=0;i<max;i++)
	{
		if(A[i]!=0)
		{
			B[i]++;
		}
	}
	for(i=0;i<n;i++)
	{
		if(B[i]>max)
		{
			Max=B[i];
			F=i;
		}
	}
	printf("%d",F);
	return 0;
}
