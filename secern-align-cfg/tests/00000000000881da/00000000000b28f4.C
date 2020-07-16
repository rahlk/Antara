void checkValue(int);
void ExchangeValue(int);
//long long int checkForFOUR(long long int);

int main(){
    int T;
    scanf("%d",&T);
    //printf("%d",T);
    checkValue(T);
    //printf("Hello, World!\n %d , %d", No2,No3);
  return 0;
} 
void checkValue(int T){
    int P,No_Chars = 0;
    for (int i = 1; i <= T; i++){
        scanf("%d",&P);
       // printf("P=%d",P);
        No_Chars = (2*P)-2;
        printf("Case #%d: ",i);
        ExchangeValue(No_Chars);
        printf("\n");
    }
}
void ExchangeValue(int No_Chars){
    char ch;
    for (int i = 1; i <= No_Chars+1; i++){
        scanf("%c",&ch);
        if(ch == 'E'){
           printf("S"); 
        }
        else if (ch == 'S'){
            printf("E");
        }
    }
}