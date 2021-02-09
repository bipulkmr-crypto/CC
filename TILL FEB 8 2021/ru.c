#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    int arr[1000]={0};
    printf("Enter size of list ");
    scanf("%d",&n);
    
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int diff,temp;
    int j;
   for (i = 0; i < n-1; i++)          
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              {
                  temp = arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
              }

    diff=arr[n-1]-arr[0];
    printf("%d \n",diff);
}