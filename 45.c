#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int i,j;
	int elem[n],rank[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element and rank: ");
		scanf("%d %d",&elem[i],&rank[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			int temp;
			if(rank[j]>=rank[j+1])
			{
				temp = rank[j];
				rank[j]=rank[j+1];
				rank[j+1]=temp;
				temp = elem[j];
				elem[j]=elem[j+1];
				elem[j+1]=temp;
			}
		}
	}
	printf("CURRENT ARRAY: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",elem[i]);
	}
	j=n;
	printf("\nArray after elements are being deleted:\n");
	for(j=n;j>=0;j--)
	{
		for(i=0;i<j;i++)
		{
			printf("%d ",elem[i]);
		}
		printf("\n");
	}
	return 0;
}