#include<stdio.h>
void funcr1(int r,int c)
{
     for(int i=0;i<(c-2);i++){
        printf("%d %d\n",r+1,i+1);
        printf("%d %d\n",r+2,i+3);
     }
     printf("%d %d\n",r+2,1);
     printf("%d %d\n",r+1,c);
     printf("%d %d\n",r+2,2);
     printf("%d %d\n",r+1,c-1);
}
void funcr2(int r,int c)
{
     for(int i=0;i<(c-2);i++){
        printf("%d %d\n",r+1,i+1);
        printf("%d %d\n",r+2,i+3);
     }
     printf("%d %d\n",r+2,1);
     printf("%d %d\n",1,c-1);
     printf("%d %d\n",r+1,c);
     printf("%d %d\n",r+2,2);
     printf("%d %d\n",1,c);
     printf("%d %d\n",r+1,c-1);
}
void funcc1(int c,int r)
{
     for(int i=0;i<(r-2);i++){
        printf("%d %d\n",i+1,c+1);
        printf("%d %d\n",i+3,c+2);
     }
     printf("%d %d\n",1,c+2);
     printf("%d %d\n",r,c+1);
     printf("%d %d\n",2,c+2);
     printf("%d %d\n",r-1,c+1);
}
void funcc2(int r,int c)
{
     for(int i=0;i<(r-2);i++){
        printf("%d %d\n",i+1,c+1);
        printf("%d %d\n",i+3,c+2);
     }
     printf("%d %d\n",1,c+2);
     printf("%d %d\n",r-1,1);
     printf("%d %d\n",r,c+1);
     printf("%d %d\n",2,c+2);
     printf("%d %d\n",r,1);
     printf("%d %d\n",r-1,c+1);
}
int main()
{
    int t,T;
    int i,j,k;
    int r,c;
    scanf("%d",&T);
    for(t=1;t<=T;t++){
    scanf("%d %d",&r,&c);
    if(c>=5 && r>1){
       if(r%2==0){
          printf("Case #%d: POSSIBLE\n",t);
          for(i=0;i<r;i+=2)
              funcr1(i,c);
        }
       if(r>3 && r&1){
          printf("Case #%d: POSSIBLE\n",t);
          for(i=1;i<(r-2);i+=2)
              funcr1(i,c);
          funcr2(r-2,c);
       }
    }
    else if(r>=5 && c>1){
       if(c%2==0){
          printf("Case #%d: POSSIBLE\n",t);
          for(i=0;i<c;i+=2)
              funcc1(i,r);
        }
       if(c>3 && c&1){
          printf("Case #%d: POSSIBLE\n",t);
          for(i=1;i<(c-2);i+=2)
              funcc1(i,r);
          funcc2(c-2,r);
       }
    }
    else
        printf("Case #%d: IMPOSSIBLE\n",t);
    }
}
