#include <stdio.h>
int perfect(int n)
{
    if(n == 1)
    return 1;
    else
    {
        return(n+perfect(n-1));
    }
}
int main()
{
    int n, d, i, s = 0;
    printf("Enter a number to check if it is perfect number or not\n");
    scanf("%d", &n);
    //Iterative Approach
    /*
    for (i = 1; i < n; i++)
    {
        if ((n % i) == 0)
            s += i;
    }
    if (s == n)
        printf("YES\n");
    else
        printf("NO\n");
        */
    //recursive code 
    d=perfect(n);
    if(d==n)
    printf("YES\n");
    else
    {
        printf("NO\n");
    }
    

}