#include<stdio.h>
int main()
{
    FILE *fp1,*fp2,*fp3;
    int ch;
    fp1 = fopen("/home/crypto/git_workspace/CC/A_Sushi_for_Two.cpp","r");
    fp2 = fopen("/home/crypto/git_workspace/CC/B_Card_Deck.cpp","r");
    fp3=fopen("Codeforces_700_Div2_A&B.txt","w+");
    while ((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp3);
    }
    while((ch=fgetc(fp2))!=EOF)
    {
        fputc(ch,fp3);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}