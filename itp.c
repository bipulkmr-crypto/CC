#include<stdlib.h>
#include<stdio.h>
int main()
{
    	FILE *fp1=NULL;
	fp1=fopen("filehandling_read1","r");
	if(fp1==NULL) { printf("error in opening file ");  exit(0);}
    char c;
    printf("\nIn r mode\n");
	while(fscanf(fp1,"%c",&c)!=EOF)
    {
    	printf("%c",c);
	}
    	FILE *fp2=NULL;
	fp2=fopen("filehandling_read2","r+");
	if(fp2==NULL) { printf("error in opening file ");  exit(0);}
			printf("\nIn r+ mode\n");
		while(fscanf(fp2,"%c",&c)!=EOF)
    {
    	printf("%c",c);
	}
		FILE *fp3=NULL;
	fp3=fopen("filehandling_read3","w+");
	
	if(fp3==NULL) { printf("error in opening file ");  exit(0);}
	printf("\nIn w+ mode\n");
		while(fscanf(fp3,"%c",&c)!=EOF)
    {
    	printf("%c",c);
	}
		FILE *fp4=NULL;
	fp4=fopen("filehandling_read4","a+");
	if(fp4==NULL) { printf("error in opening file ");  exit(0);}
		printf("\nIn a+ mode\n");
		while(fscanf(fp4,"%c",&c)!=EOF)
    {
    	printf("%c",c);
	}
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);
	return 0;
}


---(02) Writing contents onto file and closing it---

#include<stdlib.h>
#include<stdio.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("filehandling_read4","w");
	if(fp==NULL) { printf("error in opening file ");  exit(0);}
    int n;
    printf("Enter length of string :");
    scanf("%d",&n);
    char ch[n+1];
    for(int i=0;i<n+1;i++)
    {
    	scanf("%c",&ch[i]);
    	fprintf(fp,"%c",ch[i]);
	}
    fclose(fp);
	return 0;
}


---(03) Merge the content of two file in third file---

#include<stdlib.h>
#include<stdio.h>

int main()
{
	FILE *fp1=NULL;
	fp1=fopen("filehandling_read.txt","r");
	FILE *fp2=NULL;
	fp2=fopen("filehandling_read1.txt","r");
	FILE *fp3=NULL;
	fp3=fopen("filehandling_write","a");
	if(fp1==NULL) { printf("error in opening file 1");  exit(0);}
	if(fp2==NULL) { printf("error in opening file 2");  exit(0);}
	if(fp3==NULL) { printf("error in opening file 3");  exit(0);}
	char c;
	while(!feof(fp1))
	{
      c=fgetc(fp1);
	  fprintf(fp3,"%c",c);
	}
	while(!feof(fp2))
	{
      c=fgetc(fp2);
	  fprintf(fp3,"%c",c);
	}
    fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	printf("Merge successful");
	return 0;
}


---(04) Moving to specific location on a file---

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp1=NULL;
	fp1=fopen("filehandling_read.txt","r");
	if(fp1==NULL) { printf("error in opening file 1");  exit(0);}
	int n;
	printf("Enter the location :");
	scanf("%d",&n);
    fseek(fp1,n,SEEK_CUR);
    char c=getc(fp1);
    while(c!=EOF)
    {
    	printf("%c",c);
    	c=getc(fp1);
	}
	fclose(fp1);
	return 0;
}


---(05) Copy all content of one file to another---

#include<stdlib.h>
#include<stdio.h>
int main()
{
	FILE *fp1=NULL;
	fp1=fopen("filehandling_read.txt","r");
	FILE *fp2=NULL;
	fp2=fopen("contentcopied","w");
	if(fp1==NULL) { printf("error in opening file 1");  exit(0);}
	if(fp2==NULL) { printf("error in opening file 2");  exit(0);}
	char c;
	while(!feof(fp1))
	{
      c=fgetc(fp1);
	  fprintf(fp2,"%c",c);
	}
	
    fclose(fp1);
	fclose(fp2);
	printf("content copied to another file");
	return 0;
}

---(06) Find particular word and its frequency and replace by "IIITA"---

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp1=NULL;
	fp1=fopen("filehandling_read1","r+");
	FILE *fp2=NULL;
	fp2=fopen("filehandling_replace1","w+");
	char word[50];
	if(fp1==NULL)
	{
		printf("Error in opening file");
		exit(0);
	}
	char ch[50];
	printf("Enter a word to search :");
	scanf("%s",ch);
	int count=0;
	while(fscanf(fp1,"%s",word)!=EOF)
	{
	      if(strcmp(word,ch)==0)
		  {
		  	count++;
		  	strcpy(word,"IIITA");
		  }
		  fprintf(fp2,"%s ",word);
	}
	printf("frequency : %d",count);
	printf("\n%s is replaced by IIITA",ch);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
--(07) Replace a specific word by another word---

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp1=NULL;
	fp1=fopen("filehandling_read1","r+");
	FILE *fp2=NULL;
	fp2=fopen("filehandling_replace1","w+");
	char word[50];
	if(fp1==NULL)
	{
		printf("Error in opening file");
		exit(0);
	}
	char ch[50];
	printf("Enter a word to replace :");
	scanf("%s",ch);
	char ch1[50];
	printf("Enter the new word :");
	scanf("%s",ch1);
	int count=0;
	while(fscanf(fp1,"%s",word)!=EOF)
	{
	      if(strcmp(word,ch)==0)
		  {
		  	count++;
		  	strcpy(word,ch1);
		  }
		  fprintf(fp2,"%s ",word);
	}
	printf("frequency : %d",count);
	printf("\n%s is replaced by %s",ch,ch1);
	fclose(fp1);
	fclose(fp2);
	return 0;
}


---(08) Lexicographically

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("filehandling_read1","r+");
	char word[50];
	if(fp==NULL)
	{
		printf("Error in opening file");
		exit(0);
	}
	char ch_arr[50][50];
	int i=0;
	
	while(fscanf(fp,"%s",word)!=EOF)
	{
	      if(strlen(word)==5)
		  {
            strcpy(ch_arr[i],word);
			i++;       		  	
	       }
	}
	fclose(fp);
	char temp[50];
	for(int k=0;k<i-1;k++)
	{
		for(int j=k+1;j<i;j++)
		{
			if(strcmp(ch_arr[k],ch_arr[j])>0)
			{
				strcpy(temp,ch_arr[k]);
				strcpy(ch_arr[k],ch_arr[j]);
				strcpy(ch_arr[j],temp);
			}
		}
	}
	FILE *f=fopen("lexographically","w");
	if(f==NULL)
	{
		printf("Error in opening file");
		exit(0);
	}
	for(int j=0;j<i;j++)
	{
	  printf("%s \n",ch_arr[j]);
	  fprintf(f,"%s \n",ch_arr[j]);
    }
    fclose(f);
    printf("Successfully written in lexicographical order in anothe file");
	return 0;
}


---(09) Count number of words ,character and sentence---

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp1=NULL;
	fp1=fopen("filehandling_read.txt","r");
	if(fp1==NULL) { printf("error in opening file 1");  exit(0);}
	int count_char=0,count_word=0,count_sentence=0;
	char word[50];
	while(fscanf(fp1,"%s",word)!=EOF)
	{ 
		count_word++;
		int l=strlen(word);
		count_char+=l;
	}
		FILE *fp2=NULL;
	fp2=fopen("filehandling_read.txt","r");
	char c=getc(fp2);
	while(c!=EOF)  	
  	{
  		if(c=='\n') count_sentence++;
  		c=getc(fp2);
	  }
	printf("number of words %d",count_word);
    printf("\nnumber of characters %d",count_char);
    printf("\nnumber of sentences %d",count_sentence);
	fclose(fp1);
	return 0;
}