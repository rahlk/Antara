#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
struct broken{
    int id;
    int nbOccured;
};

char *generateLine(int length, int seed){
    srand(seed);
    char *line=calloc(length, sizeof(char));
    for(int i=0;i<length;i++){
        int random=(rand())%2;
        line[i]=(char)(random+'0');
    }
    // printf("generated %s\n", line);
    return line;

}

int max(int s1,int s2, int s3){
    // printf("max in %d, %d, %d\n", s1, s2, s3);
    if(s1>=s2 && s1>=s3 && s1>=0)return s1;
    if(s2>=s1 && s2>=s3 && s2>=0) return s2;
    if(s3>=s1 && s3>=s2 && s3>=0) return s3;
    return 0;
}

bool wasFound(struct broken brokens[], int totalFound, int length, int id){
    for(int i=0;i<length;i++){
        if(brokens[i].nbOccured!=0 && brokens[i].id==id){
            brokens[i].nbOccured++;
            return true;
        }
    }
    brokens[id].id=id;
    brokens[id].nbOccured=1;
    return false;
}

void findNBrokens(struct broken brokens[], int totalFound, int length, int nbBroken){
    // int min=0;
    // int max=-1;
    int array[length];
    for(int i=0;i<length;i++){
        array[i]=brokens[i].nbOccured;
        // printf("%d\t", array[i]);
    }
    // printf("\n");
    for (int i = 0; i < length; ++i) 
    {
        for (int j = i + 1; j < length; ++j)
        {
            if (array[i] > array[j]) 
            {
                int a =  array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
    int min=array[length-nbBroken];
    int found=0;
    // printf("min %d, broken %d\n", min, nbBroken);
    for(int i=0;i<length;i++){
        if(brokens[i].nbOccured>=min && found<nbBroken){
            printf("%d ", brokens[i].id);
            found++;
        }
    }
    printf("\n");
    fflush(stdout);
}

void findBroken(int nbLines, char **responses, char **lines, int broken, int computers){
    int brokens[broken];for(int i=0;i<broken;i++)brokens[i]=-1;
    struct broken arrayOfBroken[computers];
    for(int i=0;i<computers;i++){
        arrayOfBroken[i].id=i;
        arrayOfBroken[i].nbOccured=0;
    }

    int total=0;
    for(int i=0;i<nbLines;i++){
        long int matrix[computers-broken+1][computers+1];
        for(int r=0;r<computers-broken+1;r++)for(int c=0;c<computers+1;c++)matrix[r][c]=0;
        
        for(int r=1;r<computers-broken+1;r++){
            for(int c=1;c<computers+1;c++){
                int s1=0;
                if(responses[i][r-1]==lines[i][c-1]){
                    s1=3;
                }else s1=-3;
                // printf(")
                // printf("r:%c, l:%c\n", responses[i][r], lines[i][c]);
                matrix[r][c]=max(matrix[r-1][c-1]+s1, matrix[r-1][c]-2, matrix[r][c-1]-2);
            }
        }
     /*   printf("matrix %d\n", i);
        for(int r=0;r<computers-broken+1;r++){
            // printf("%c\t", responses[i][r]);
            for(int c=0;c<computers+1;c++){
                // printf("%c\t", lines[i][c]);
                printf("%ld\t",matrix[r][c]);
            }
            printf("\n");
        }
*/
        int maxR=0, maxC=0;
        long int max=-1;
        for(int r=1;r<computers-broken+1;r++){
            for(int c=1;c<computers+1;c++){
                if(matrix[r][c]>max){
                    maxR=r;maxC=c;
                    max=matrix[r][c];
                }
            }
        }
        // printf("max is %d in %d, %d\n", max, maxR, maxC);

        int foundBrokens=0;
        int r=maxR, c=maxC;
        while(matrix[r][c]!=0){
            if(matrix[r][c-1]>matrix[r][c]){
                // printf("hor gap: %ld [%d][%d]\n", matrix[r][c-1],r,c-1);
                c=c-1;
                brokens[foundBrokens]=c;
                if(wasFound(arrayOfBroken, total, computers, c)==false){
                    total++;
                }
                foundBrokens++;
            }
            else if(matrix[r-1][c]>matrix[r][c]){
                // printf("vert gap: %ld [%d][%d]\n", matrix[r-1][c],r-1,c);
                r=r-1;
            }else{
                c-=1;
                r-=1;
            }
        }
        if(r!=0 || c!=0){
            // printf("hor gap: %ld [%d][%d]\n", matrix[r][c-1],r,c-1);
            c=c-1;
            brokens[foundBrokens]=c;
            if(wasFound(arrayOfBroken, total, computers, c)==false){
                total++;
            }
            foundBrokens++;
        }
/*
        for(int r=maxR;r>=0;r--){
            for(int c=maxC;matrix[r][c]!=0;c++){
                if(matrix[r][c-1]>matrix[][c]){
                    printf("hor gap: %ld [%d][%d]\n", matrix[r][c-1],r,c-1);
                }
                else if(matrix[r-1][c]>matrix[r][c]){
                    printf("vert gap: %ld [%d][%d]\n", matrix[r-1][c],r-1,c);
                }
                       
            }
        }
*/
    }
    /*
        for (int i = 0; i < broken; ++i) 
        {
            for (int j = i + 1; j < broken; ++j)
            {
                if (brokens[i] > brokens[j]) 
                {
                    int a =  brokens[i];
                    brokens[i] = brokens[j];
                    brokens[j] = a;
                }
            }
        }
    for(int i=0;i<broken;i++){
        printf("%d ", brokens[i]);
    }*/
    // printf("\n");
    // fflush(stdout);
    /*for(int i=0;i<computers;i++){
        printf("id %d broken %d occured\n", arrayOfBroken[i].id, arrayOfBroken[i].nbOccured);
    }*/
    findNBrokens(arrayOfBroken, total, computers, broken);
}

int main(int argc, char const *argv[])
{
    int tests;scanf("%d", &tests);
    for(int i=0;i<tests;i++){
        int N;scanf("%d", &N);
        int B;scanf("%d", &B);
        int F;scanf("%d", &F);
        char **lines=calloc(F, sizeof(char*));
        char **response=calloc(F, sizeof(char*));
        for(int j=0;j<F;j++)response[j]=calloc(N-B+1, sizeof(char));
        for(int i=0;i<F;i++){
            lines[i]=generateLine(N, i);
            // printf("%s\n", lines[i]);
        }
      /*lines[0]="01101";
        lines[1]="00110";
        lines[2]="01010";
        lines[3]="11010";*/
        for(int j=0;j<F;j++){
            // lines[i]=generateLine(N, i);
            printf("%s\n", lines[j]);
            fflush(stdout);
            scanf("%s", response[j]);
            // printf("%s\n", response[j]);

        }
        findBroken(F, response, lines, B, N);
        int result;scanf("%d", &result);
        if(result==-1)exit(0);
    }
    return 0;
}
