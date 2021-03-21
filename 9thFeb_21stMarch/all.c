// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int count=0;
//     int i;
//     int arr[n];
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     int j=0;
//     int maxi=0;
//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(arr[j]-arr[i]>0)
//         }
//     }
// }
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int r = a[j];
                a[j] = a[i];
                a[i] = r;
            }
        }
    }
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            m = i;
            break;
        }
    }
    int c = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            c = i;
            break;
        }
    }
    if ((c - m + 1) != 1)
    {
        printf("%d", (c - m + 1));
    }
    else
    {
        printf("-1");
    }
}