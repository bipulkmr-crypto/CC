#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int sum[n*n];
    int k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[k]=arr[i]+arr[j];
            k++;
        }
    }
    int p=0;
    for(i=0;i<k;i++)
    {
        
    }
}