#include <stdio.h>

int main(){
    int T,N,i,size,j=0;
    scanf("%d",&T);
    char seq[2000];
    for(i=1;i<=T;i++)
    {
        scanf("%d",&size);
        scanf("%s",seq);
        for(j=0;j<(2*size-2);j++)
        {
            if(seq[j] == 'S')
                seq[j] = 'E';
            else
                seq[j] = 'S';
        }
        printf("Case #%d: %s\n",i,seq);
    }
    return 0;
}