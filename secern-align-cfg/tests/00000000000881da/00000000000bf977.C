#include<stdio.h>

int main()

{
    
int x;
 
scanf("%d",&x);
    
int e,i,j;
    
char s[x][1000];
    
for(e=0;e<x;e++)
    
{
        
j=0
;        
scanf("%s",s[e]);
        
for(i=0;s[e][i]!='\0';i++)
        
{
            
j++;
        
}
        
for(i=0;i<j;i++)
        
{
            
if(s[e][i]=='S')s[e][i]='E';

else s[e][i]='S';
        
}
                
    
}

for(i=0;i<x;i++)
{
printf("Case #%d: %s\n",i+1,s[i]);

}   
return 0;

}