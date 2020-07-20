#include<stdio.h>
#include<string.h>
int compare(char s[50],char s1[50])
{
    int i,j,count=0;
    for(i=0;i<strlen(s);i++)
    {
        for(j=0;j<strlen(s1);j++)
        {
            if(s[i]==s1[i])
            count++;
            else 
            break;
        }
        
    }
    return count;

}
int main()
{
    int t,n,i,j,r;
    char w[50],s[50],s1[50];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        scanf("%s",&w[j]);
        r=compare(s,s1);
        printf("Case #%d: %d\n",t,r);
        return();
    }
}