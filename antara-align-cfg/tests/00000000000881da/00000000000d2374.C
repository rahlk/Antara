int main(){
    int T,i,j;
    int N;
    char c[100000];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&N);
        for(j=0;j<2N-2;j++){
            scanf("%c",&c[j]);
            if(c[j]=='E'){
                c[j]='S';
            }else{
                c[j]='E';
            }
        }
        printf("Case #%d: ",i+1);
        for(j=0;j<2N-2;j++){
            printf("%c",c[j]);
        }
        printf("\n");
    }
}