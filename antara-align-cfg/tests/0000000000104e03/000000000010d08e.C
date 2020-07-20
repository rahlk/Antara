#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
int t;
long long int j=0;
scanf("%d",&t);
int k=0;
while(t--)
{int r,c;
scanf("%d %d",&r,&c);
int r1=r,c1=c;
if(r>c)
{
    int temp=r;
    r=c;
    c=temp;
}
if((r==1||c==1)||(r==2&&c<=3)||(r==3&&c<=3)||((r%2==1)&&(c%2==1))||(r==2&&c==4))
{
    printf("IMPOSSIBLE\n");
    continue;
}
else{
    printf("POSSIBLE\n");
    int a[r+1][c+1];
    int p=0;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(i%2==1)
                {
                    a[i][j]=2*(j)+p;


            }
            else{
                if(j<=ceil(c/2))
                   a[i][j]=a[i-1][(int)ceil(c/2.00)+1]-1+2*(j-1);
                 else{if(c%2==1)
                    a[i][j]=a[i-1][1]+ 2*(j-ceil(c/2.00))-1;
                    else
                        a[i][j]=a[i-1][1]+ 2*(j-ceil(c/2.00))-3;
                 }

            }


        }
p=i*c;
    }
int x=1;
int n=1;
while(n!=0){

int i=1,j=1;
        if(x==r*c+1)
        {
        break;
        }
    for( i=1;i<=r;i++)
    {
        for( j=1;j<=c;j++)
        {
            if(a[i][j]==x)
          {
              if(r1<c1)printf("%d %d\n",i,j);
              else printf("%d %d\n",j,i);
          x++; j=c+1,i=c+1;
            }
        }

    }
}


}



}


}
