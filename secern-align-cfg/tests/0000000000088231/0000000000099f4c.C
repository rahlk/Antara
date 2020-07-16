#import <stdio.h>
void main (){
    int testCases=0;
    int casoLido=0;
    int i=0;
    int j=0;
    int fake=1;
    int number=0;
    scanf("%d",&testCases);
    for (i=0; i<testCases; i++){
        fake=1;
        scanf("%d", &casoLido);
        for (j=0;fake==1;j++){
            //testar se j e casoLido-j tem algum 4
            number=j;
            fake=0;
            while (number>0){
                if (number%10==4)   
                    fake=1;
                number=number/10;
            }
            number=casoLido-j;
            while (number>0){
                if (number%10==4)   
                    fake=1;
                number=number/10;
            }
            if (fake==0)
                printf("Case #%d: %d %d\n", i, j, casoLido-j);
        }
    }
}

