#include<stdio.h>
#include<string.h>
void remove_spaces(char *buf , int len)
{
    int i=0,j=0;
    char temp[100]={0};

    for(i=0,j=0 ; i<len ; i++)
    {
	if(buf[i] == ' ' && buf[i]!=NULL)
	{
	    for(j=i ; j<len ; j++)
	    {
		buf[j] = buf[j+1];
	    }
	    len--;
	}
    }
}
char *strrev(char *string)
{
      char *p1, *p2;

      if (! string || ! *string)
	    return string;
      for (p1 = string, p2 = string + strlen(string) - 1; p2 > p1; ++p1, --p2)
      {
	    *p1 ^= *p2;
	    *p2 ^= *p1;
	    *p1 ^= *p2;
      }
      return string;
}

void main()
{
    char string[100]={0};

    int i=0,len=0;

    printf("\nEnter your string : ");
    gets(string);

    len = strlen(string);

    remove_spaces(string , len);

    printf("\nCase #1: %s\n",string);
    //strrev(string);
	*strrev(string);
    printf("\nCase #2: %s \n",string);
}
