 *fp = fopen("Output.txt", "r");
    if (fp == NULL)
    {
        printf("File not found");
    }
    else
    {
        int ch;
        while ((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }
    }