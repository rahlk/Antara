#include<stdio.h> 
int main()
 { 
    int i,n,num;
    scanf("%d\n",&n);
     for(i=0;i<n;i++)
     { 
        scanf("%d\n",&num);
        }
        for(i=0;i<n;i++)
     { 
if(40<num<50)
{
if(num==45)
{printf("Case #%d:%d %d\n",i,1,num-12);
}
else
{printf("Case #%d:%d %d\n",i,1,num-11);
}
}
else
{printf("Case #%d:%d %d\n",i,1,num-1);
}
}
        
    return 0;
    }