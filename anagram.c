#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    printf("Enter strings in lower case or upper case completely\n");
    scanf(" %s", s1);
    scanf(" %s", s2);
    int c=1;
    if (strlen(s1)!= strlen(s2))
    {
        printf("Not anagarms");
    }
    else
    {
        int arr[26] = {0};
        for (int i; i < strlen(s1); i++)
        {
            arr[s1[i] - 97]++;
        }
        for (int i = 0; i < strlen(s2); i++)
        {
            arr[s2[i] - 97]--;
        }
        for (int i = 0; i < 26; i++)
        {
            if (arr[i!=0])
            {
                printf("Not anagrams");
                c=0;
                break;
            }
        }
        if(c==1)
        {
            printf("Anagrams\n");
            printf("%s",s1);
        }
    }
}