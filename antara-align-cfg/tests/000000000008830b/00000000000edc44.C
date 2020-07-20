#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int binsearch(long int v[], int x, int l, int r){
    int mid;
    if(l>r){
        return -1;
    }
    mid = (l+r)/2;
    if(v[mid]==x) return mid;
    else{
        if(v[mid]>x) return binsearch(v,x,l,mid-1);
        else return binsearch(v,x,mid+1,r);
    }

}
void swap(long int *a, long int *b){
    int tmp = *a;
    *a=*b;
    *b=tmp;
}

int partition ( long int *A, int l, int r ){
    int i, j;
    int x = A[r];
    i = l-1;
    j = r;
    for ( ; ; ) {
        while(A[++i]<x);
        while(A[--j]> x);
        if (j == l) break;
        if (i >= j) break;
        swap(&A[i],&A[j]);
    }
    swap(&A[i],&A[r]);
    return i;
}

void QuickSortR( long int *A, int l, int r ){
    int q;
    if (r <= l) return;
    q = partition(A, l, r);
    QuickSortR(A, l, q-1);
    QuickSortR(A, q+1, r);
}

void QuickSort(long int *A, int N){
    int l=0, r=N-1;
    QuickSortR(A, l, r);
}


int main(){
    int i,j,k=0,firstdiv,z=0;
    int test,nprime, maxprime;
    int tentativo[2];
    long int seq[100];
    long int res[100];
    long int copia[100];
    long int cc[100];
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d %d",&maxprime, &nprime);
        for(j=0;j<nprime;j++){
            scanf("%ld",&seq[j]);
        }
        for(k=2;k<=seq[0]/2;k++){
            if(seq[0]%k==0) tentativo[z++]=k;
        }
        firstdiv=tentativo[0];
        k=0;
        while((seq[k]%firstdiv==0)&&(k<=nprime)){
            res[k]=firstdiv;
            firstdiv=seq[k]/firstdiv;
            k++;
        }
        res[k]=firstdiv;
        if(k<nprime){
            k=0;
            firstdiv=tentativo[1];
            while(seq[k++]%firstdiv==0&&k<nprime){
                res[k-1]=firstdiv;
                firstdiv=seq[k-1]/firstdiv;
            }
        }
        res[k]=firstdiv;
        nprime++;
        for(k=0;k<nprime;k++){
            //printf("%d ",res[k]);
            copia[k]=res[k];
        }
        //printf("\n\n");
        //mergesort(copia,cc,0,nprime);
        QuickSort(copia,nprime);
        j=1;
        cc[0]=copia[0];
        for(k=1;k<nprime;k++){
            if(copia[k]!=copia[k-1]){
                cc[j++]=copia[k];
            }

        }
        //printf("\n");
        printf("case #%d: ",i+1);
        for(k=0;k<nprime;k++){
            z=binsearch(cc,res[k],0,26);
            //printf(" %d=%d->",res[k],z);
            switch(z) {
                case 0:
                    printf("A");
                    break;
                case 1:
                    printf("B");
                    break;
                case 2:
                    printf("C");
                    break;
                case 3:
                    printf("D");
                    break;
                case 4:
                    printf("E");
                    break;
                case 5:
                    printf("F");
                    break;
                case 6:
                    printf("G");
                    break;
                case 7:
                    printf("H");
                    break;
                case 8:
                    printf("I");
                    break;
                case 9:
                    printf("J");
                    break;
                case 10:
                    printf("K");
                    break;
                case 11:
                    printf("L");
                    break;
                case 12:
                    printf("M");
                    break;
                case 13:
                    printf("N");
                    break;
                case 14:
                    printf("O");
                    break;
                case 15:
                    printf("P");
                    break;
                case 16:
                    printf("Q");
                    break;
                case 17:
                    printf("R");
                    break;
                case 18:
                    printf("S");
                    break;
                case 19:
                    printf("T");
                    break;
                case 20:
                    printf("U");
                    break;
                case 21:
                    printf("V");
                    break;
                case 22:
                    printf("W");
                    break;
                case 23:
                    printf("X");
                    break;
                case 24:
                    printf("Y");
                    break;
                case 25:
                    printf("Z");
                    break;
                default:
                    break;
                }
        }

    }

return 0;
}