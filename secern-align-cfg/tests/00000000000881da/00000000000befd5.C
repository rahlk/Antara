#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    //e=1,s=0
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        int arr[n][n];
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        arr[i][j]=-1;
        char st[2*n-2],ans[2*n-2];
        char ch;
        scanf("%c",&ch);
        gets(st);
        int r=0,c=0;
        for(int j=0;j<2*n-2;j++)
        {
           if(st[j]=='E')
           {arr[r][c]=1;c++;}
           else
           {arr[r][c]=0;r++;}
           
        }
        int rr=0,cc=0,co=0,fl=0;
        while(1)
        {
            if(rr==n-1&&cc==n-1)
            break;
            if(arr[rr][cc]==0)
            {ans[co++]='E';cc++;fl=1;}
            else if(arr[rr][cc]==1)
            {ans[co++]='S';rr++;fl=0;}
            else
            {
                if(fl==1)
                {if(rr<n-1)
                {ans[co++]='S';rr++;fl=0;}
                    else
                    {ans[co++]='E';cc++;fl=1;}
                }
                else
                {if(cc<n-1)
                {ans[co++]='E';cc++;fl=1;}
                    else
                    {ans[co++]='S';rr++;fl=0;}//ans[co++]='E';cc++;
                    }
            }
            
        }
        for(int i=0;i<2*n-2;i++)
        {
            printf("%c",ans[i]);
        }
        printf("\n");
    }
    

    return 0;
}