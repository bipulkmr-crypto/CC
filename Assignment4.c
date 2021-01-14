#include <stdio.h>
#include <time.h>
#include <stdbool.h>
int getNextGap(int gap)
{
    gap = (gap * 10) / 13;
    if (gap < 1)
    {
        return 1;
    }
    return gap;
}
void combSort(int a[], int n)
{
    int gap = n;
    int temp = 0;
    bool swapped = true;
    while (gap != 1 || swapped == true)
    {
        gap = getNextGap(gap);
        swapped = false;
        for (int i = 0; i < n - gap; i++)
        {
            if (a[i] > a[i + gap])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swapped = true;
            }
        }
    }
}
int main()
{
    int n;
    int i;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    combSort(arr, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    //Demonstrating Linear search
    /*printf("Enter a value to be searched");
    int search = 0;
    scanf("%d", &search);
    bool flag = false;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        printf("The value of index=%d\n", i);
    else
    {
        printf("Not found\n");
    }*/
}