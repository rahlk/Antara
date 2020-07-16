#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    char c[101],s;
    int n,j,i;
    scanf("%s",c);
    n=strlen(c);
    for(i=0;i<n;i=i+1)
    {
        if(c[i]=='E')
        {
            for(j=i+1;j<n;j++)
            {
                if(c[j]=='S')
                    break;
            }
            s=c[i];
            c[i]=c[j];
            c[j]=s;
            i=j;
        }
        else if(c[i]=='S')
        {
            for(j=i+1;j<n;j++)
            {
                if(c[j]=='E')
                    break;
            }
            s=c[i];
            c[i]=c[j];
            c[j]=s;
            i=j;
        }
    }
    printf("%s",c);
    return 0;
}
