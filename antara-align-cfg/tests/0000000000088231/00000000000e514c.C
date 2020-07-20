#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char N[200];
    char A[200],B[200];
    scanf("%s",&N);


    for(i=0; i<strlen(N); i++ )
    {
        if(N[i]=='4')
        {
            A[i]='2';
            B[i]='2';
        }
        else
        {
            A[i]=N[i];
            B[i]='0';
        }

       }
       A[strlen(N)]='\0';
       B[strlen(N)]='\0';


        printf("%s\n",A);

        printf("%s",B);
        
}

