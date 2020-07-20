#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define LAST_INDEX(str,i,len)  str[len-(i)-1]

int main()
{
    int tests;
    int len=0;
    uint64_t number, check1, check2;
    char strNumber[20]="";
    char strCheck1[20]="";
    char strCheck2[20]="";
    char strFormat[20]="";
    char *ptr;

    fscanf(stdin, "%d", &tests);

    for(int t=0;t<tests; t++){

        fscanf(stdin,"%s", strNumber);

        number = strtoul(strNumber,&ptr,10);

        len = strlen(strNumber);

        if(len%2 != 0){
            len++;
            sprintf(strFormat,"%%0%dlu",len);

            sprintf(strNumber,strFormat,number);
        }
        strCheck1[len+1]=0;
        strCheck2[len+1]=0;

        for(int i = 0; i < len; i+=2 )
        {
            if(LAST_INDEX(strNumber,i,len) == '4' ){

                if(LAST_INDEX(strNumber,i+1,len) == '4' )
                {
                    LAST_INDEX(strCheck1,i,len)='5';
                    LAST_INDEX(strCheck2,i,len)='9';

                    LAST_INDEX(strCheck1,i+1,len)='1';
                    LAST_INDEX(strCheck2,i+1,len)='2';

                }else{

                    LAST_INDEX(strCheck1,i,len)='3';
                    LAST_INDEX(strCheck2,i,len)='1';

                    LAST_INDEX(strCheck1,i+1,len)=LAST_INDEX(strNumber,i+1,len);
                    LAST_INDEX(strCheck2,i+1,len)='0';
                }
            }else{

                if(LAST_INDEX(strNumber,i+1,len) == '4' )
                {
                    LAST_INDEX(strCheck1,i,len)=LAST_INDEX(strNumber,i,len);
                    LAST_INDEX(strCheck2,i,len)='0';
                    LAST_INDEX(strCheck1,i+1,len)='2';
                    LAST_INDEX(strCheck2,i+1,len)='2';
                }else{
                    LAST_INDEX(strCheck1,i,len)=LAST_INDEX(strNumber,i,len);
                    LAST_INDEX(strCheck2,i,len)='0';
                    LAST_INDEX(strCheck1,i+1,len)=LAST_INDEX(strNumber,i+1,len);
                    LAST_INDEX(strCheck2,i+1,len)='0';
                }

            }

        }

        check1 = strtoul(strCheck1,&ptr,10);
        check2 = strtoul(strCheck2,&ptr,10);

        fprintf(stdout,"Case #%d: %llu %llu\n",t+1 ,check1,check2);



    }


    return 0;
}
