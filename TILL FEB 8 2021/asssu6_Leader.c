#include <stdio.h>
#include <stdbool.h>
#include<time.h>
void print(int *ptr, int n)
{
    int i, j;
    bool flag = true;
    for (i = 0; i < n; i++)
    {
        flag = true;
        for (j = i + 1; j < n; j++)
        {
            if (*(ptr+i) < *(ptr+j))
            {
                flag = false;
                break;
            }
        }
        if (flag)
            printf("%d ", *(ptr+i));
    }
}
int main()
{
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    int i, n;
    printf("Enter Size of array \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter values in array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    print(arr, n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nCode execution time (in s) =");
    printf("%f\n", cpu_time_used);
    return 1;
}
