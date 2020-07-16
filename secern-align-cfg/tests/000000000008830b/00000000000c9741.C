#include<stdio.h>
int main()
{
    int t,n,i,num;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        int ar[26]= {0},n,L,j,k,F,l,f=0,c=0,a[100],Te,te;
        scanf("%d%d",&n,&L);
        for(j=0; j<L; j++)
        {
            scanf("%d",(a+j));
        }
        printf("Case #%d: ",i);
        for(j=2; j<=n; j++)
        {
            F=0;
            for(k=2; k<j; k++)
            {
                if(j%k==0)
                {

                    F=1;
                    break;
                }
            }
            if(!F)
            {
                for(l=0; l<L; l++)
                    if(a[l]%j==0)
                    {
                        ar[c]=j;
                        c++;
                        break;
                    }


            }
            /*  else if(!F&&f)
              {
                  c++;
                  ar[c]=j;*/
            if(c==26)
                break;
            // }


        }

        for(j=0; j<26; j++)
        {
            if(a[0]%ar[j]==0)
            {
                num=a[0]/ar[j];
                break;
            }
        }
        if(a[1]%num==0)
        {
            printf("%c",65+j);
            for(j=0; j<26; j++)
            {
                if(num==ar[j])
                {

                    printf("%c",65+j);
                    break;
                }
            }
            for(l=1; l<L; l++)
            {
                num=a[l]/num;
                for(j=0; j<26; j++)
                {
                    if(num==ar[j])
                    {

                        printf("%c",65+j);
                        break;
                    }
                }
            }
        }
            else if(a[1]%num!=0)
            {
                Te=num;
                num=a[j];
                te=j;
                for(j=0; j<26; j++)
                {
                    if(Te==ar[j])
                    {

                        printf("%c",65+j);
                        break;
                    }
                } printf("%c",65+te);
                for(l=1; l<L; l++)
                {
                    num=a[l]/num;
                    for(j=0; j<26; j++)
                    {
                        if(num==ar[j])
                        {

                            printf("%c",65+j);
                            break;
                        }
                    }

                }
            }

            /* for(l=0; l<c; l++)
                 printf("%d ",ar[l]);*/
                 printf("\n");

        }

        return 0;
    }
