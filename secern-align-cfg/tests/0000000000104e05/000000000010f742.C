#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,o=1,k,l,m,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        char s[n][90],a[90]="\0",d[90]="\0";
        for(i=0;i<n;i++)
        {
            scanf("%s",s[i]);
        }
        l=k=0;
        for(i=0;i<n-1;i++)
        {l=0;
        int u;
            int m1=strlen(s[i]);
            m=strlen(s[i+1]);
            for(j=m-1,u=m1-1;j>=0&&u>=0;j--,u--)
            {
                if(s[i][u]==s[i+1][j])
                {
                    l+=1;
                //   printf("hii %d %d ",j,u);
                }
                if(u==0||j==0||s[i][u]!=s[i+1][j])
                {
                	if(u==0&&s[i][u]==s[i+1][j])
                	strcpy(d,s[i]);
                	else if(j==0&&s[i][u]==s[i+1][j])
                	strcpy(d,s[i+1]);
                    else
					strncpy(d,s[i]+(u+1),m1);
              //      printf("\n%s\n",d);
                    if(i!=0)
                    {
                       // strncpy(a,s[i]+(j+1),m);
                    /*if(!strcmp(d,a))
                    {
                        strcpy(d,"\0");
                        strcpy(a,d);
                    }
                    else*/
                    if(strcmp(d,"\0"))
                    {
                        strcpy(a,d);
                        k+=l;
                    }
                        
                    }
                    else
                    {
					k=l;
				    strcpy(a,d);
					}
                    if(l>0)
                    i++;
                    break;
                }
            }
            //printf("l%dl",l);
        }
        printf("Case #%d: %d\n",o,k);
        o++;
    }
}