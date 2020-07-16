#include<stdio.h> 
main()
{   char alpha[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int x,y,i,j,n,line,p=0,q;
    int arr[26];
    scanf("%d",&line);
    for(x=0;x<line;x++)
    {
        scanf("%d %d",&n,&q);
        for(i=n;i>=3;i--)
        {
            int c=0;
            for(j=1;j<=i;j++)
                if(i%j==0)
                    c++;
            if(c==2)
                arr[p++]=i;
        }
        int rr[q];
        for(i=0;i<q;i++)
            scanf("%d",&rr[q]);
        for(i=0;i<q;i++)
            for(j=0;j<26;j++)
            {
                if(rr[i]%arr[j]==0)
                {
                  int div=rr[i]/arr[j];
                        for(y=0;y<26;y++)
                            if(div==arr[y])
                                break;
                    printf("%c%c",alpha[j],alpha[y]);
                    break;
                }
        
            }
        p=0;
    }
}