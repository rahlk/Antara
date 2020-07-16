#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int T;
    long int N,L;
    scanf("%d",&T);
    char **result=(char**)malloc(sizeof(char*)*T);
    for(int i=0;i<T;i++)
    {
        int first_char=0;
        int second_char=0;
        scanf("%ld %ld",&N,&L);
        char *string=(char*)malloc(sizeof(char)*(L+2));
        long int *arr=(long int*)malloc(sizeof(long int)*L);
        long int *res=(long int*)malloc(sizeof(long int)*(N+1));
        for(long int j=0;j<(N+1);j++)
        {
            res[j]=0;
        }
        for(long int j=0;j<L;j++)
        {
            scanf("%ld",&arr[j]);
            
        }
        if(arr[0]%2==0)
        {
            first_char=2;
            second_char=arr[0]/2;
        }
        else
        {
            for(long int j=3;j<=sqrt(arr[0]);j=j+2)
            {
                if(arr[0]%j==0)
                {
                    first_char=j;
                    second_char=arr[0]/j;
                    break;
                }
            }
        }
        res[first_char]=1;
        res[second_char]=1;
        if(arr[1]%first_char==0)
        {
            long int temp=first_char;
            first_char=second_char;
            second_char=temp;
        }
        for(long int j=1;j<L;j++)
        {
            second_char=arr[j]/second_char;
            res[second_char]=1;
        }
        int k=0;
        if(res[2])
        {
            res[2]=65;
            k++;
        }
        for(long int j=3;j<N+1;j=j+2)
        {
            if(res[j])
            {
                res[j]=65+k;
                k++;
            }
        }
        string[0]=char(res[first_char]);
        second_char=arr[0]/first_char;
        string[1]=char(res[second_char]);
        long int m;
        for(m=1;m<L;m++)
        {
            second_char=arr[m]/second_char;
            string[m+1]=char(res[second_char]);
        }
        string[m+1]='\0';
        result[i]=string;
    }
    for(int i=0;i<T;i++)
    {
        printf("Case #%ld: %s\n",i+1,result[i]);
    }
}