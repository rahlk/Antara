#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,length,i,length_of_b;
    char a[102],b[102],c[102];
    scanf("%d",&t);
    while(t)
    {
        length_of_b=0;
        scanf("%s",a);
        length=strlen(a);
        int sum=0;
        for(i=0;i<length;i++)
        {
            sum=sum*10+(int)a[i]-48;
            if(sum<2)
            {
                b[i]='0';
            
            }
            else
            {
                b[i]=(char)(sum/2+48);
                sum=sum%2;
            }
            length_of_b++;
        }
        if(b[length_of_b-1]<=a[length-1])
           c[length_of_b-1]=(char)(a[length-1]-b[length_of_b-1]+48);
        else
        {
             c[length_of_b-1]=(char)((10+((int)a[length-1]-48)-((int)b[length_of_b-1]-48))+48);
             
        }
        for(i=0;i<length_of_b-1;i++)
        {
            c[i]=b[i];
        }
        for(i=0;i<=length_of_b-1;i++)
        {
            if(c[i]=='4'||b[i]=='4')
            {
                c[i]=(char)((int)(c[i])-48-2+48);
                b[i]=(char)((int)(b[i])-48+2+48);
            }
        }
        printf("Case #%d: ",t);
        for(i=0;i<length_of_b;i++)
        {
            if(i==0&&b[i]=='0')
            continue;
            printf("%c",b[i]);
        }
        printf(" ");
        for(i=0;i<length_of_b;i++)
        {
              if(i==0&&c[i]=='0')
              continue;
            printf("%c",c[i]);
        }
        printf("\n");
        t--;
           
    }
}