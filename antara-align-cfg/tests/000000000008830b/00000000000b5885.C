/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,t,l,j,k,s=0;

    scanf("%d",&t);
    for(i=0;i<t;i++)
        {

            scanf("%d%d",&n,&l);
            int b[l],m=0;

            for(j=0;j<l;j++)
            {
                scanf("%d",&b[j]);
            }
            int a[n],p=0;
            for(j=2;j<=n;j++)
                {
                    s=0;
                 for(k=2;k<j;k++)
                    {
                     if(j%k==0)
                        s=1;
                    }
                    if(s==0)
                    {
                        a[p]=j;
                        p++;
                    }
                }
                int c[l+1],q,r;
            for(j=0;j<l;j++)
            {
                if(m==0)
                {
                for(k=0;k<p;k++)
                {
                    if(b[j]%a[k]==0)
                        {
                                q=a[k];
                                r=b[j]/a[k];break;
                        }
                }
                if(b[j+1]%q==0)
                    c[m]=p;
                else
                    c[m]=q;
                m++;
                }
                 c[m]=b[j]/c[m-1];
                 m++;

            }
            
            int count=0,d[m];
         for (j = 0; j < m; j++)
        {
            for (k = 0; k < count; k++)
             {
                if(c[j] == d[k])
                 break;
                }
                if (k == count)
                {
                d[count] = c[j];
                count++;
                }
        }
     
        for(j=0;j<m;j++)
        {
            if(c[j]==d[0])
                printf("A");
            else if(c[j]==d[1])
                printf("B");
            else if(c[j]==d[2])
                printf("C");
            else if(c[j]==d[3])
                 printf("D");
            else if(c[j]==d[4])
                printf("E");
            else if(c[j]==d[5])
                printf("F");
            else if(c[j]==d[6])
                printf("G");
            else if(c[j]==d[7])
                printf("H");
            else if(c[j]==d[8])
                printf("I");
            else if(c[j]==d[9])
                printf("J");
            else if(c[j]==d[10])
                printf("K");
            else if(c[j]==d[11])
                printf("L");
            else if(c[j]==d[12])
                printf("M");
            else if(c[j]==d[13])
                printf("N");
            else if(c[j]==d[14])
                printf("O");
            else if(c[j]==d[15])
                printf("P");
            else if(c[j]==d[16])
                printf("Q");
            else if(c[j]==d[17])
                printf("R");
            else if(c[j]==d[18])
                printf("S");
            else if(c[j]==d[19])
                printf("T");
            else if(c[j]==d[20])
                printf("U");
            else if(c[j]==d[21])
                printf("V");
            else if(c[j]==d[22])
                printf("W");
            else if(c[j]==d[23])
                printf("X");
            else if(c[j]==d[24])
                printf("Y");
            else if(c[j]==d[25])
                printf("Z");
            else printf("invalid choice");
        }
      }
    return 0;
}
