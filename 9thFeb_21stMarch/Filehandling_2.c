#include <stdio.h>
int main()
{
    FILE *fp = fopen("Output.txt", "w+");
    fprintf(fp,"%s %s %s %s","Hello", "I ", "am","Bipul");
    fclose(fp);
}