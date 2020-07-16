#include <stdio.h>

int checkprime(int n){
    int flag = 1;
    for (int i = 2; i <= n / 2; i++) { 
        if (n % i == 0) { 
            flag = 0;
            break;
        } 
    }
    if(flag == 1){
        return 1;
    }else{
        return 0;
    }
}

void findprime(int arr[],int n){
    int temp = n, i = 25;
    if(temp % 2 == 0){
            temp -= 1;
    }
    for(int j = temp; j >= 2;j--){
        if(checkprime(j) == 1){
            arr[i] = j;
            i -= 1;
        }
    }
}

void tran(int n,int arr[]){
    int i;
    for(i = 0;i < 26;i++){
        if(arr[i] == n){
            break;
        }
    }
    printf("%c",65 + i);
}

int main(){
    int t,n1,n2,pw,arr[26],next;
    char symb;
    scanf("%d",&t);
    for(int i = 1;i <= t;i++){
        scanf("%d %d", &n1,&n2);
        findprime(arr,n1);
        printf("Case #%d: ",t);
        scanf("%d",&pw);
        tran(pw/n2,arr);
        tran(n2,arr);
        next = n2;
        do{
            scanf("%d%c",&pw,&symb);
            next = pw / next;
            tran(next,arr);
        }while(symb != '\n');
    }
    
    return 0;
}