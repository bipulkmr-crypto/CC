#include <stdio.h>
#include<time.h>
int main()
{
    clock_t start, end;
   double cpu_time_used;
   start = clock();

    int n;
    scanf("%d", &n);
    int i, j;
    int c = 0;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf(" %d", arr + i);
    }
    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {
            c = 1;
            if (arr[i] < arr[j])
            {
                c = 0;
                break;
            }
        }

        if (c)
            printf("%d \t", arr[i]);
    }
     end = clock();
   cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
   printf("\nCode execution time (in s) =");
   printf("%f\n", cpu_time_used);
   return 0;
}