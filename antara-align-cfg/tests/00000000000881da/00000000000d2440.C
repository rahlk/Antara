#include<stdio.h>
int main(){
    int t,p;
    scanf("%d",&t);
    for(p=0;p<t;p++)
    {
       int n,i;
       scanf("%d",&n);
       char str1[(2*n-2)],str2[(2*n-2)];
       scanf("%s",str1);
       for(i=0;i<(2*n-2);i++)
       {
        if(str1[i]=='E')
        str2[i]='S';
        else
        str2[i]='E';
       }
       printf("Case #%d: ",p+1);
       for(i=0;i<(2*n-2);i++)
       printf("%c",str2[i]);
       printf("\n");
    }
return 0;    
}