#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Intellectual property of Dinuru Seniya. 
//Do not reproduce or modify without permission from author.
//All rights reserved. Copyright 2019

int main()
{
    int N,T,x;
    scanf("%d",&T);
    for(x=1;x<=T;x++){
    scanf("%d",&N);
    char lyd[2*N-2],me[2*N-2];
    scanf("%s",&lyd);
    int z=0;
    while (z<strlen(lyd)){
        if(lyd[z]=='E'){me[z]='S';}
        else if(lyd[z]=='S'){me[z]='E';}
    z++;
   }
   me[z] = '\0';
    printf("Case #%d: %s\n",x,me);}
    return 0;
}