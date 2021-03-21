#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d", &n);
        scanf("%d", &m);
        int arr[n];
        int i, j;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < (n - i - 1); j++)
            {
                if (arr[j] > arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        int maxi = 0, mini = 0;
        for (i = 0; i < n - m; i++)
        {
            mini += arr[i];
        }
        i=n-m;
        // for (j = n - 1;i>=0; i--,j--)
        // {
        //     maxi += arr[j];
        // }
        for(i=m;i<n;i++)
        maxi += arr[i];
        int ans = maxi - mini;
        printf("%d", ans);
        printf("\n");
    }
}