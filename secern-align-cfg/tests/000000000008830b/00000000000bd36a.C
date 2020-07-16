#include<stdio.h>
#include<math.h>
void main()
{
    int t,k=1;
    scanf("%d",&t);
    while(t--)
    {int i,j,n;
    int pr[10000][2],pri=0;

    //printf("Enter the number till which you want prime numbers\n");
    scanf("%d",&n);

    //printf("Prime numbers are:-\n");
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
            //printf("%d ",i);
            pr[pri][0]=i;
            pr[pri][1]=0;
            pri++;
        }
    }
    for(i=0;i<pri;i++)
    {
        //printf("%d %d\n",pr[i][0],pr[i][1]);
    }
    //printf("enter length ");
    int l;
    scanf("%d",&l);
    int gi[l+1],nu[l+1],nui=0;
    scanf("%d",&gi[0]);
    int temp=0;
    for(i=0;i<pri;i++)
    {
        //printf("gggggggggg%d %d\n",gi[0],pr[i][0]);
        if(gi[0]%pr[i][0]==0)
        {
            pr[i][1]=1;
            nu[nui]=pr[i][0];
            nui++;
            temp=gi[0]/pr[i][0];
            nu[nui]=temp;
            nui++;
            //printf("%d %d\n",pr[i][0],temp);
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
    //for(i=0;i<pri;i++)
        //printf("%d %d\n",pr[i][0],pr[i][1]);
    //printf("length is %d ",l);
    for(i=1;i<(l);i++)
    {
        scanf("%d",&gi[i]);
        //printf("%d ",gi[i]);
        temp=gi[i]/temp;
        nu[nui]=temp;
        nui++;
        //printf("ddddddddddd%d \n",temp);
        for(j=0;j<pri;j++)
        {
        if(pr[j][0]==temp)
        {
            pr[j][1]=1;
            break;
        }
        }
    }
    //for(i=0;i<pri;i++)
        //printf("%d %d\n",pr[i][0],pr[i][1]);
    int c=1;
    for(i=0;i<pri;i++)
    {
        //printf("%d %d\n",pr[i][0],pr[i][1]);
        if(pr[i][1]==1)
        {
            pr[i][1]=c++;
        }
    }
    //for(i=0;i<pri;i++)
        //printf("%d %d\n",pr[i][0],pr[i][1]);
    printf("Case #%d: ",k++);
    for(i=0;i<nui;i++)
    {
        //printf("%d \n",nu[i]);
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
