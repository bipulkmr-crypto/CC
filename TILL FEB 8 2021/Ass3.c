#include <stdio.h>
#include <time.h>
void display(int *ptr,int n)
{
	int i,c=0,j;
	for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {
            c = 1;
            if (*(ptr+i) < *(ptr+j))
            {
                c = 0;
                break;
            }
        }

        if (c)
            printf("%d  ",*ptr);
    }
	
}
int main()
{
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    printf("Enter size of array greater than 1\n");
    int n;
    scanf("%d", &n);
    int i;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf(" %d", arr + i);
    }
	display(arr,n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nCode execution time (in s) =");
    printf("%f\n", cpu_time_used);
    return 1;
}
