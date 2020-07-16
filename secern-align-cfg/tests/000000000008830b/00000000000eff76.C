#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b)
{
    if(a==b) return a;
    if(a>b) return gcd(a-b,b);
    else return gcd(a,b-a);
}
int cmp(const void *a,const void *b){
    return *(int *)a-*(int *)b;
}
main()
{
    int t1,test;
    scanf("%d",&t1);
    test=t1;
    while(t1--)
    {
        int n;
        int t;
        scanf("%d %d",&n,&t);
        int a[t],an[t+1],ansort[t+1],anusort[26];
        for(int i=0;i<t;i++)
            scanf("%d",&a[i]);
        for (int i = 0; i < t; i++) {
            an[i+1]=gcd(a[i],a[i+1]);
        }
        an[0]=a[0]/an[1];
        an[t]=a[t-1]/an[t-1];
        
        for(int i=0;i<t+1;i++)
            ansort[i] = an[i];
        qsort(ansort,t+1,sizeof(int),cmp);
        int j=0;
        for (int i = 0; i < t+1; i++) {
            if(ansort[i]!=ansort[i+1])
                anusort[j++]=ansort[i];
        }
        
        char A=65;
        
        printf("Case #%d: ",test-t1);
        for (int i = 0; i < t+1; i++) {
            for (int j = 0; j <26 ; j++) {
                if(an[i]==anusort[j])
                {
                    printf("%c",A+j);
                }
            }
        }
        printf("\n");
    } 
}