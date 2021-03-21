#include <stdlib.h>
#include <string.h>
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char ch[500]={'9'};
        int i=0;
        int freq[26] = {0};
        scanf("%s", ch);
        while(ch[i]!='9')
        {
            if(freq[ch[i]-97]==0)
            printf("%c",ch[i]);
            freq[ch[i]-97]++;
            i++;
        }
    }
}