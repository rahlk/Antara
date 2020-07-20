#include<stdio.h>
int main()
{
int t;
scanf(" %d",&t);
for(int i=0;i<t;++i)
{
 int p,q;
 scanf(" %d %d",&p,&q); //did not put this statement
 int arr[q+1][q+1];
 for(int k=0;k<q+1;k++)
 for(int l=0;l<q+1;l++)
 arr[k][l]=0;
 int x,y;
 char d;
 for(int j=0;j<p;j++)
{
 scanf(" %d %d %c",&x,&y,&d);
 if(d=='N')
 {for(int k=0;k<q+1;++k)for(int l=y+1;l<q+1;l++) arr[k][l]++;}
 else if(d=='S')
 {for(int k=0;k<q+1;++k)for(int l=0;l<y;l++) arr[k][l]++;}
 else if(d=='E')
 {for(int k=x+1;k<q+1;++k)for(int l=0;l<q+1;l++) arr[k][l]++;}
 else if(d=='W')
 {for(int k=0;k<x;++k)for(int l=0;l<q+1;l++) arr[k][l]++;}
 }
int max=0;
 for(int k=0;k<q+1;k++)for(int l=0;l<q+1;l++)max=(max>arr[k][l]?max:arr[k][l]);

 int flag=1;
 for(int k=0;k<q+1;k++)
 {
 for(int l=0;l<q+1;l++)
 {
 if(max==arr[k][l]){
 printf("Case #%d: %d %d\n",i+1,k,l);flag=0;break;}
 }
 if(!flag)break;
 }
/*

 for(int k=0;k<q+1;k++){
 for(int l=0;l<q+1;l++)
 {printf("%d,%d = %d\n",k,l,arr[k][l]); 
 if(max == arr[k][l])
 {
 printf("Case #%d: %d %d\n",i+1,k,l);
 break;}
 }brak;
 }*/
}
return 0;
}