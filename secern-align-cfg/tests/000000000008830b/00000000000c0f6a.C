#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int T;
    long long int N,L;
    scanf("%d",&T);
    long long int first_char;
    long long int second_char;
    //char **result=(char**)malloc(sizeof(char*)*T);
    for(int i=0;i<T;i++)
    {
        
        scanf("%lu %lu",&N,&L);
        //char string[L+1]="";
        //int arr[L];
        //int res[N+1];
       // char *string=(char*)calloc(sizeof(char),(L+2));
        long long int *arr=(long long int*)calloc(sizeof(long long int),L);
        long int long *res=(long long int*)calloc(sizeof(long long int),(N+1));
        
        for(long long int j=0;j<(N+1);j++)
        {
            res[j]=0;
        }
        for(long long int j=0;j<L;j++)
        {
            scanf("%lu",&arr[j]);
            
        }
        if(arr[0]%2==0)
        {
            first_char=2;
            second_char=arr[0]/2;
        }
        else
        {
            for(long long int j=3;j<=sqrt(arr[0]);j++)
            {
                if(arr[0]%j==0)
                {
                    first_char=j;
                    second_char=arr[0]/j;
                    
                }
            }
        }
        res[first_char]=1;
        res[second_char]=1;
        if(arr[1]%first_char==0)
        {
            long long int temp=first_char;
            first_char=second_char;
            second_char=temp;
        }
        for(long long int j=1;j<L;j++)
        {
            second_char=arr[j]/second_char;
            res[second_char]=1;
        }
        long long int k=0;
        for(long long int j=0;j<(N+1);j++)
        {
            if(res[j])
            {
                res[j]=65+k;
                k=k+1;
            }
        }
        printf("Case #%ld: ",i+1);
        printf("%c",(char)(res[first_char]));
        second_char=arr[0]/first_char;
        printf("%c",(char)(res[second_char]));
        
        for(long long int m=1;m<L;m++)
        {
            second_char=arr[m]/second_char;
            printf("%c",(char)(res[second_char]));
        }
        printf("\n");
        free((void*)arr);
        free((void*)res);
    }
    /*for(int i=0;i<T;i++)
    {
        printf("Case #%ld: %s\n",i+1,result[i]);
    }*/
}