#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int T,A;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int maxlen=0;
        int P[500]={0};
        int R[500]={0};
        int S[500]={0};
        scanf("%d",&A);
        char arr[501];
        for(int j=0;j<A;j++)
        {
            scanf("%s",arr);
            int len=strlen(arr);
            if(len>maxlen)
                maxlen=len;
            for(int k=0;k<len;k++)
            {
                if(arr[k]=='P')
                    P[k]=1;
                if(arr[k]=='R')
                    R[k]=1;
                if(arr[k]=='S')
                    S[k]=1;
            }
        }
        char *res=(char*)malloc(sizeof(char)*(maxlen+1));
        for(int j=0;j<maxlen;j++)
        {
            if(P[j]&&R[j]&&S[j])
            {
                res="IMPOSSIBLE";
                break;
            }
            if(P[j]&&(!(R[j]))&&(!(S[j])))
            {
                res=res+'S';
                break;
            }
            if(R[j]&&(!(P[j]))&&(!(S[j])))
            {
                res=res+'P';
                break;
            }
            if(S[j]&&(!(P[j]))&&(!(R[j])))
            {
                res=res+'R';
                break;
            }
            if(P[j]&&R[j]&&(!(S[j])))
            {
                res=res+'P';
                continue;
            }
            if(P[j]&&S[j]&&(!(R[j])))
            {
                res=res+'S';
                continue;
            }
            if(S[j]&&R[j]&&(!(P[j])))
            {
                res=res+'R';
                continue;
            }
        }
        printf("Case #%d: %s\n",i+1,res);
        
    }
    
}
