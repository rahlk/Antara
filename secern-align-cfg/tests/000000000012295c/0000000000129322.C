#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void m_valain_val()
{
int i,j,T,P,Q,k=1;
int m_val,n_val;
scanf("%d",&T);
if(T<=100)
{
while(k<=T)
{
m_val=0;
n_val=0;
scanf("%d %d",&P,&Q);
int x_arr[P],y_arr[P];
char a[P];
for(i=0;i<P;i++)
{
scanf("%d %d %c",&x_arr[i],&y_arr[i],&a[i]);
m_val=m_val+x_arr[i];
n_val=n_val+y_arr[i];
}
m_val=m_val/P;
n_val=n_val/P;
printf("Case #%d: %d %d",k,floor(m_val),floor(n_val));
k++;
}
}
}