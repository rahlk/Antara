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
            if(tab1[strlen(tab1)-1]=='0'){
                int j = strlen(tab1)-1;
                while(tab1[j]=='0'){
                    tab1[j]='9';
                    j--;
                }
                if(tab1[j]!='5'){
                tab1[j] =  (char)((int)tab1[j]  -1);
                tab2[strlen(tab2)-1] = (char)((int)tab2[strlen(tab2)-1]  +1);}
                else{
                    tab1[j] = (char)((int)tab1[j]  -3);

    tab2[j] = (char)((int)tab2[j]  +2);
    tab2[strlen(tab2)-1] = (char)((int)tab2[strlen(tab2)-1]  +1);
                }
            }else{
                if(tab1[strlen(tab1)-1]=='5'){

                    tab1[strlen(tab1)-1] = (char)((int)tab1[strlen(tab1)-1]  -2);
    tab2[strlen(tab2)-1] = (char)((int)tab2[strlen(tab2)-1]  +2);
                }else{
              tab1[strlen(tab1)-1] = (char)((int)tab1[strlen(tab1)-1]  -1);
    tab2[strlen(tab2)-1] = (char)((int)tab2[strlen(tab2)-1]  +1);
                }

            }
    printf("Case #%d : %s %s \n",i,tab1,tab2);
memset(tab1,0,100);
memset(tab2,0,100);
    }
        return 0;
	}





