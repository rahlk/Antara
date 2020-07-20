#include<stdio.h>
#include<string.h>
#include<stdio.h>
void main()
{ 
    int n,x,a;
    char s1;
    char p[100];
    char t[100];
    scanf("%d",&n);
    int i=0;int j=0;
    
     int change=0;
    int k=0;
    for(a=0;a<n;a++)
    {scanf("%d",&x);
   scanf("%s",t);
   if(t[0]=='S')
        p[k++]='E';
    else
        p[k++]='S';
    for(i=1;t[i]!='\0';i++)
        {if(t[i]==t[i-1])
            change=0;
        else
            change=1;
        if(!change)
            p[k]=p[k-1];
        else
        {    if(t[i]=='S')
             p[k++]='E';
            else
            p[k++]='S';
            
        }
        }
    p[k]='\0';
    printf("case #%d: %s\n",a+1,p);
       
    }exit(0);
}