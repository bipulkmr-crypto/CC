#include <stdio.h>
int main()
{
    FILE *fp = fopen("/home/crypto/git_workspace/CC/B_Minimal_Cost.cpp", "r");
    FILE *fp2 = fopen("/home/crypto/git_workspace/CC/Input.txt", "r+");
    int ch;
    if (fp== NULL)
    {
        printf("File not found");
    }
    else
    {
        while ((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }
    }
    if (fp2 == NULL)
    {
        printf("File not found");
    }
    else
    {
        while ((ch = fgetc(fp2)) != EOF)
        {
            printf("%c", ch);
        }
    }
}