#include ​<stdio.h>
#include​<time.h>

int​ f=0,​sum=0​;
int​ perfect(​int n)
{
    f++;
    if(n==1)
    {
        return 1;
    }
    else
    {
        if(n%f == 0)
        {
            sum+=f;
            return(perfect(n/f));
        }
        else
        {
            return(perfect(n));
        }
    }
}
int main()
{
    clock_t start,end;
    double cpu_time_used;
    start=clock();
    int n, d, i, s = 0;
    printf("Enter a number to check if it is perfect number or not\n");
    scanf("%d", &n);
    //Iterative approach
    for (i = 1; i < n; i++)
    {
        if ((n % i) == 0)
        {
            s += i;
        }
    }
    if (s == n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n";)
    }
    //Recursive Approach
    d = perfect(n);
    if (sum == n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nCode execution time(in s=");
    printf("%f\n", cpu_time_used);
    return 0;
}