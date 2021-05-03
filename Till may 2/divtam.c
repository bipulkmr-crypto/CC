#include <stdio.h>
int main()
{
    char c;
    char previous = '.';
    int i = 0;
    while (1)
    {
        int count = 0;
        scanf("%c", &c);

        if (c != '0' || c != '1')
        {
            printf("%d", count);
        }
        if (c == '0' && previous == '1')
            count++;
        if (i > 0)
            previous = c;
        i++;
    }
}