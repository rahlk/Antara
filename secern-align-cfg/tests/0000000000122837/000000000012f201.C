
#include <stdio.h>
#include <stdlib.h>


int T,W;

//int magic[]={ 8, 35, 44, 17, 1, 53 };
int ring[6];

void problem(void) {
    long long int r;
    int verdict,j;
//    FILE *fp;
    printf("190\n");
    fflush(stdout);
    scanf("%lld", &r);
/*    fp=fopen("save.txt","w");
    fprintf(fp, "%llx\n",r);
    fclose(fp); */
    ring[3]=(int)((r>>47) & 127);
    ring[4]=(int)((r>>38) & 127);
    ring[5]=(int)((r>>31) & 127);
    
    printf("38\n");
    fflush(stdout);
    scanf("%lld", &r);
    r-=(ring[3]<<9) + (ring[4]<<7) + (ring[5]<<6);
    ring[0]=(int)((r>>38) & 127);
    ring[1]=(int)((r>>19) & 127);
    ring[2]=(int)((r>>12) & 127);
    
    for (j=0;j<6;j++) {
        printf("%d ",ring[j]);
    }
    printf("\n");
    fflush(stdout);
    scanf("%d",&verdict);
    if (verdict== -1) exit(-1);
}

int main(int argc, char **argv) {
    int i;
    scanf("%d %d",&T,&W);
    for (i=0;i<T;i++) 
        problem();
    return 0;
}
