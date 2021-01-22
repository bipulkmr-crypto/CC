#include "stdio.h"
int main()
{
	int n;
	scanf("%d",&n);
	int arr[1000]={0};
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int ans=0;
	int sum2=((n*n)-n);
	while((sum2*ans)<sum)
	{
		ans++;
	}
	printf("%d",ans);
}