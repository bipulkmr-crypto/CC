#include "stdio.h"
#include<stdbool.h>
int main()
{
	int n;scanf("%d",&n);

	int arr[n];
	int i;
	int j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bool flag=false;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			flag=false;
			if(arr[j]>arr[i])
			{
				printf("%d ",arr[j]);
				flag=true;
				break;
			}
			
		}
		
		if(flag==false)
		{
			printf("-1 ");
		}
		if(i==(n-1))
		printf("-1");		
	}
}