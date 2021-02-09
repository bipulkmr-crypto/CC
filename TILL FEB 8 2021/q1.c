#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i,c=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int j;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				c++;
			}
		}
	}
	printf("%d",c);

}