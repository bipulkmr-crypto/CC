//author bipul kumar
#include<stdio.h>
int main()
{
    FILE *fp1,*fp2,*fp3;
    int ch;//note here in fopen please write the adress of your desktop
    fp1 = fopen("/home/crypto/git_workspace/CC/Nice_to_help_you.txt","w+");//use w+ as it will simultaneously create and write in the  file and using w will search the file in the directory which you pasted and if not found it will give segmentation fault
    int some_number=86;
    fprintf(fp1,"Hello This is Bipul roll %d\n",some_number);
    fclose(fp1);
    return 0;
}