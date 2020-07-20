#include <stdio.h>
#include <stdlib.h>
int search(int *,int);
void sort(int *);
void isSafe (int , int *);
int main()
{
    int T;
    scanf("%d",&T);
    for(int Test=1;Test<=T;Test++){
        int Zprime,width,a0,a1;
        scanf("%d %d",&Zprime,&width);
        int identity[26]={0};
        int *Repeated=(int *)malloc(sizeof(int)*(width+1));
        int *OriginalPan=(int *)malloc(sizeof(int)*width);
        for(int i=0;i<width;i++)
            scanf("%d",&OriginalPan[i]);
        for(int i=2;i<=OriginalPan[0]/2+1;i++)
            if(OriginalPan[0]%i==0){
                a0=i;
                break;
            }
        a1=OriginalPan[0]/a0;
        if(OriginalPan[1]%a0==0){
            Repeated[0]=a1;
            Repeated[1]=a0;
            Repeated[2]=OriginalPan[1]/a0;
        }
        else{
            Repeated[0]=a0;
            Repeated[1]=a1;
            Repeated[2]=OriginalPan[1]/a1;
        }
        isSafe(Repeated[0],identity);
        isSafe(Repeated[1],identity);
        isSafe(Repeated[2],identity);
        for(int i=2;i<width;i++){
            Repeated[i+1]=OriginalPan[i]/Repeated[i];
            isSafe(Repeated[i+1],identity);
        }
        sort(identity);
        printf("Case #%d: ",Test);
        for(int i=0;i<=width;i++){
            int pos=search(identity,Repeated[i]);
            fflush(stdout);
            printf("%c",65+pos);
        }
        printf("\n");
        free(OriginalPan);
        free(Repeated);
    }
    return 0;
}
void isSafe(int item,int * identity){
    if(identity[25]!=0)
        return;
    int i;
    for(i=0;identity[i]!=0;i++)
        if(identity[i]==item)
            return;
    identity[i]=item;
}
int search(int *identity,int item){
    int i;
    for(i=0;i<26;i++)
        if(item==identity[i])
            return i;
    return i;
}
void sort(int *identity){
    for(int i=1;i<26;i++){
        int j=i-1;
        int key=identity[i];
        while((j>=0)&&(identity[j]>key)){
            identity[j+1]=identity[j];
            j--;
        }
        identity[j+1]=key;
    }
}
