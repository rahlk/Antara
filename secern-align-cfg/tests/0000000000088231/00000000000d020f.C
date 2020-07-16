#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void itoa (int num, char *buff)
{
   int a,i=0,j=0;
   char tbuff[10]={0};
   while(num!=0)
   {
       a=num%10;
       tbuff[i++]=a+0X30;
       num/=10;
   }
   tbuff[i]='\0';
   i=strlen(tbuff);
   i--;
   while(i>=0)
   {
       buff[j]=tbuff[i--];
   }
   strrev(buff);
}
int main()
{
    int T, N, i, j=0,A,B;
    char buff[20]={0};
    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        scanf("%d", N);
        itoa(N, buff);
        j=0;
        while(buff[j]!='\0')
        {
            if(buff[j]=='4')
                buff[j]='2';
        }
        A=atoi(buff);
        memset(buff,'\0',20);
        B=N-A;
        printf("Case #%d: %d %d\n",i+1, A, B);
    }
    return 0;
}