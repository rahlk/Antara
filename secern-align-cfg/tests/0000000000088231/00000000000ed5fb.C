#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int t;

int main()
{
scanf("%d ",&t);
for(int i=1;i<t+1;i++){
        char tab[100] , tab1[100], tab2[100];
	gets(tab);
memset(tab1,0,100);
memset(tab2,0,100);
    for(int i=0;i<strlen(tab);i++){
        if(tab[i]=='4'){
           tab1[i] = '3';
           tab2[i] = '1';
        }else{
            tab1[i] = tab[i];
           tab2[i] = '0';
        }
    }
    printf("Case #%d : %s %s \n",i,tab1,tab2);
memset(tab1,0,100);
memset(tab2,0,100);
    }
        return 0;
	}





