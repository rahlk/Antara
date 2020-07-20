#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int hasfour(long long int x)
{
    while(x>0)
    {
        if(x%10 == 4)
            return 1;
        x=x/10;
    }
    return 0;
}

void fourgone(long long int n, long long int *a, long long int *b)
{
    long long int i=0,j=0;
    //int found=0;

    for(i=n/2; i<=n; i++) {
        j = n-i;
        if(j>0 && !hasfour(j)&&!hasfour(i)){ 
            *a=i;
            *b=j;
            break;
        }
    }
    return;
}
int main()
{
    int test=0,i=0;
    long long int n=0,a=0,b=0;

    scanf( "%d", &test);
    for(i=1; i<=test; i++){

        //fscanf(fd1, "%d", &n);
        scanf( "%Ld", &n);

        fourgone(n, &a,&b);  

        //fprintf(fd2, "case #%d: %d %d\n", i, a, b);
        printf("case #%d: %Ld %Ld\n", i, a, b);

    }

  //  fclose(fd1);
  //  fclose(fd2);
    return 0;
}

