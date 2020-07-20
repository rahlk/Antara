#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

int hasfour(long long int x , int *cnt)
{
    int x_cnt=0;
    while(x>0)
    {
        if(x%10 == 4){
            *cnt=x_cnt;
            return 1;
        }
        x_cnt++;
        x=x/10;
    }
    return 0;
}

void fourgone(long long int n, long long int *a, long long int *b)
{
    long long int i=0,j=0;
    int i_cnt=0,tmp=0;
    //int found=0;
    i = n;
    tmp = hasfour(i,&i_cnt);
    while(tmp) {
        j= j+2*pow(10,i_cnt);
        i = n-j;
        tmp = hasfour(i,&i_cnt);
    }
    i=n-j; 
    *a=i;
    *b=j;
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

