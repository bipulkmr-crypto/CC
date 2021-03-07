#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char p[1000];
    int ch;
    int k = 0;
    fp = fopen("/home/crypto/git_workspace/CC/A_Sushi_for_Two.cpp", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        p[k++]=(char)(ch);
    }
    int i=0;
    int sen=0,w=0;
    for(i=0;i<1000;i++)
    {
        if(p[i]==' ')
        w++;
        if(p[i]=='.')
        sen++;
    }
    w++;
    sen++;
    k=k-w-sen+2;
    printf("sentences= %d",sen);
    printf("\n");
    printf("words=%d",w);
    printf("\n");
    printf("characters=%d",k);
    printf("\n");
    fclose(fp);
}