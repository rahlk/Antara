# include <stdio.h>
int main()
{
    long int t, n, c, a, b, i, j;
    scanf("\n%ld",&t);
    for(i=0; i<t; i++)
    {
        a=0;
        scanf("\n%ld",&n);
        for(j=n,c=0; j!=0; j/=10)
            c++;
        char str[c+1];
        for(j=n,b=0; j!=0; j/=10,b++)
        {
            if((j%10)!=4)
                str[b]=j%10;
            else
                str[b]='1';
        }
        str[c]='\0';
        for(j=c; j>=0; j--)
            a=(a*10)+((int)str[j])-48);
        printf("\nCase #%ld: %ld %ld",(i+1),a,(n-a));
    }
    return 0;
}