#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,j=0,c,d;
    char amount[11],a[11],b[11];

    printf("Enter the number of test case ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the amount which you want to give on cheque ");
        scanf("%s", amount);
        c=atoi(amount);
        if(c%2==0)
        {c=c/2;
        itoa(c,a,10);
        strcpy(b,a);
        while(a[j]!='\0')
        {
            if(a[j]=='4')
            {
            a[j]=a[j]+1;
            b[j]=b[j]-1;
            }
            j++;
        }
        j=0;
        {
            if(a[j]=='4')
            {
            a[j]=a[j]+1;
            b[j]=b[j]-1;
            }
            j++;
        }
        j=0;
        {
            if(a[j]=='4')
            {
            a[j]=a[j]+1;
            b[j]=b[j]-1;
            }
            j++;
        }
        printf("Case #%d ", i);
        printf("%s ", a);
        printf("%s", b);
        printf("\n");

    }
    else
    {
        c=c/2;
        itoa(c,a,10);
        strcpy(b,a);
        while(a[j]!='\0')
        {
            if(a[j]=='4')
            {
            a[j]=a[j]+1;
            b[j]=b[j]-1;
            }
            j++;
        }
        j=0;
        {
            if(a[j]=='4')
            {
            a[j]=a[j]+1;
            b[j]=b[j]-1;
            }
            j++;
        }
        j=0;
        {
            if(a[j]=='4')
            {
            a[j]=a[j]+1;
            b[j]=b[j]-1;
            }
            j++;
        }
        j=0;
        while(b[j]!=NULL)
        {
            j++;
        }
        b[j-1]=b[j-1]+1;
        printf("Case #%d ", i);
        printf("%s ", a);
        printf("%s", b);
        printf("\n");
    }

}
return a,b;
}
