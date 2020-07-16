#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        int t;
        scanf("%d",&t);
        for(int i =0;i<t;i++)
        {
                char s[100009];
                scanf("%s",s);
                int n = strlen(s);
                //printf("n= %d\n",n);
                int a[n+3];
                int b[n+3];
                int p=-1;
                for(int i =0;i<n;i++)
                {//     printf("%d\n",s[i]-48);
                        if((s[i]-48)==4)
                        {
                                a[i]=2;
                                b[i]=2;
                                if(p==-1)
                                        p = i;
                        }
                        else
                        {
                                a[i] = s[i]-48;
                                b[i]=0;
                        }       
        //              printf("a[%d]  = %d  b[%d] = %d\n",i,a[i],i,b[i]);      
                }       
                
                printf("Case #%d: ",i+1);
                for(int j =0;j<n;j++)
                {
                        printf("%d",a[j]);
                }
                printf(" ");
                if(p!=-1){
                for(int j =p;j<n;j++)
                {
                        printf("%d",b[j]);
                }}
                printf("\n");
        }
        return 0;
}       
