#include<stdio.h>

main(){
    int T[100],x,A,B,temp,temp_varB,tempA,tempB,temp_var;
    printf("Give T value");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf("Give N value");
        scanf("%d",&T[i]);
        temp=T[i];
        A=0;
        labelfor: while(A<T[i]){
            tempA=A;
            while(A>=1){
                label: temp_var=A%10;
                if(temp_var==4){
					A++;
                    goto labelfor;
                }
				else{
                    A=A/10;
                    if(A<10)
                    	goto labelba;
                    else
                    	goto label;
                }
            }
                labelba: B=temp-tempA;
                tempB=B;
                while(B>=1){
                    labelb: temp_varB=B%10;
                    if(temp_varB==4){
						A=A+1;
                        goto labelfor;
                    }
                    else{
                        B=B/10;
                        if(B<10)
                        	goto labela;
                        else
                        	goto labelb;
                    }
                }
                
        
        labela: printf("%d\t%d\n",tempA,tempB);
               break;
    }

}}