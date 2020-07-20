#include<stdio.h>
#include <string.h>

int main()
{
    int i,j,N;
    char str[100][100],swap[50];

   scanf("%d",&N);

    for(i=0;i<N;++i)
        scanf("%s",str[i]);


    for(i=0;i<N-1;++i){
        for(j=i+1;j<N;++j)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(swap,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],swap);
            }
        }
}

    
    for(i=0;i<N;++i)
    {
        printf("%s\n",str[i]);
    }

    return 0;
}
