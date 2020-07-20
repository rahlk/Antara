#include<stdio.h>
#include<math.h>
void main()
{
    int t,k=1;
    int pr[1000000][2],pri=0,i,j;
    int n=1000000;
    for(i=2;i<=n;i++)
    {
        int c=0;
        int a=sqrt(i);
        for(j=1;j<=a;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==1)
        {
            pr[pri][0]=i;
            pr[pri][1]=0;
            pri++;
        }
    }
    scanf("%d",&t);
    while(t--)
    {   
        int i,j;
        for(i=0;i<n;i++)
            pr[i][1]=0;
        scanf("%d",&n);
        int l;
        scanf("%d",&l);
        int gi[l+1],nu[l+1],nui=0;
        scanf("%d",&gi[0]);
        int temp=0;
        for(i=0;i<pri;i++)
        {
            if(gi[0]%pr[i][0]==0)
            {
                pr[i][1]=1;
                nu[nui]=pr[i][0];
                nui++;
                temp=gi[0]/pr[i][0];
                nu[nui]=temp;
                nui++;
                break;
            }
        }
        for(i=0;i<pri;i++)
        {
            if(pr[i][0]==temp)
            {
                pr[i][1]=1;
                break;
            }
        }
        for(i=1;i<(l);i++)
        {
            scanf("%d",&gi[i]);
            temp=gi[i]/temp;
            nu[nui]=temp;
            nui++;
            for(j=0;j<pri;j++)
            {
                if(pr[j][0]==temp)
                {
                    pr[j][1]=1;
                    break;
                }
            }
        }
        int c=1;
        for(i=0;i<pri;i++)
        {
            if(pr[i][1]==1)
            {
                pr[i][1]=c++;
            }
        }
        printf("Case #%d: ",k++);
        for(i=0;i<nui;i++)
        {
            for(j=0;j<pri;j++)
            {
                if(pr[j][0]==nu[i])
                    printf("%c",'A'+(pr[j][1]-1));
            }
        }
        printf("\n");
    }
    return ;
}
