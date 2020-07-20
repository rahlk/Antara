#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int hasfour(int x)
{
    while(x>0)
    {
        if(x%10 == 4)
            return 1;
        x=x/10;
    }
    return 0;
}

void fourgone(int n, int *a, int *b)
{
    int i=0,j=0, sum=0;
    int found=0;
    i =1;

    for(i=1; i<=n; i++) {
        if(hasfour(i))
            continue;
        for(j=n-i; j>i; j--) {
            if(hasfour(j)){
                continue;
            }
            sum = i+j;
            if(sum == n){
                *a=i;
                *b=j;
                found =1;
                break;
            }
        }
        if(found)
            break;
    }
}
/*
void fourgone(double n, double *a, double *b)
{
    double i,j, sum;
    int found=0;
    i =1;

    for(i=n; i=>1;i++) {
        if(hasfour(i))
            continue;
        j = n-i;
        for(j=n-1; j >i;j--) {
            if(hasfour(j)){
                continue;
            }
            sum = i+j;
            if(sum == n){
                *a=i;
                *b=j;
                found =1;
                break;
            }
        }
        if(found)
            break;
    }
}
*/
int main()
{
    int test=0,i=0;
    int n=0,a=0,b=0;
/*
    FILE *fd1= NULL, *fd2=NULL;

    if((fd1= fopen("input.txt", "r")) == NULL) {
        printf("could not open input file\n");
        return ENOENT;
    }
    if((fd2= fopen("output.txt", "a+")) == NULL) {
        printf("could not open output file\n");
        return ENOENT;
    }
    fscanf(fd1,"%d", &test);
*/
    scanf("%d", &test);

    for(i=1; i<=test; i++){

        //fscanf(fd1, "%d", &n);
        scanf( "%d", &n);

        //fourgone(n, &a,&b);  

        //fprintf(fd2, "case #%d: %d %d\n", i, a, b);
        printf("case #%d: %d %d\n", i, a, b);

    }

  //  fclose(fd1);
  //  fclose(fd2);
    return 0;
}

