#include<stdio.h>
#include<math.h>
int main(void) {
    int t,n,u;
    scanf("%d",&t);
    for(int x=1;x<=t;x++)
    {
        scanf("%d",&n);
        u=2*n-2;
        char p[u],q[u];
        scanf("%s",p);
        for(int j=0;j<2*n-2;j++)
        {
            if(p[j]=='S')
            q[j]='E';
            else
            q[j]='S';
        }
        q[2*n-2]='\0';
        printf("Case #%d: %s\n",x,q);
       
    }
	// your code goes here
	return 0;
}


