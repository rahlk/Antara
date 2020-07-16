#include<stdio.h>
#include<string.h>
int main(){
    int T, t;
    scanf("%d", &T);
    // Offset t as t starts from 1 in input.
    for(t=1; t<=T;t++){
        const char n[102];
        scanf("%s", &n);
		char n1[102]={0},n2[102]={0}, curdigit;
        short int ndigit=strlen(n), i;
        short int flag1=0, flag2=0;
        short int showN1From = 0;
        short int showN2From = 0;
        //printf("Enter somthing");
        //printf("Entered %s\n", n);
        //printf("ndigits = %d\n",ndigit);
        for(i=0;i<ndigit;i++){
            curdigit = n[i];
            //printf(">>curdigi=%c\n",curdigit);
            switch(curdigit){
                case '4':
                    n1[i] = '2';
                    n2[i] = '2';    
                    break;
                default:
                    n1[i] = curdigit;
                    n2[i] = '0';
            }
            //printf(">>n1 = %s , n2 = %s\n", n1, n2);
            if(n1[i] == '0' && flag1==0)
            	showN1From++;
            else
            	flag1 = 1;
            	
            if(n2[i] == '0' && flag2==0)
            	showN2From++;
            else
            	flag2 = 1;
        }
        //printf(">> ndigit=%d, showFromN1 = %d, fromn2 = %d\n",ndigit, showN1From, showN2From);
        printf("Case #%d: ", t);
        for(i = showN1From;i<ndigit;i++){
			printf("%c", n1[i]);
		}
		printf(" ");
		if(showN2From >= ndigit){
			printf("0");
		} else {
	        for(i = showN2From;i<ndigit;i++){
				printf("%c", n2[i]);
			}
		}	
        printf("\n");
    }
}