#include <stdio.h>
int tab[1000],Atab[1000],Btab[1000];

int num_split(int t){
    int n=0;
    while(t!=0){
        tab[n]=t%10;
        t=t/10;
        n++;
    }
    return n;
}

void divide_non_4(int n){
    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < 10; k++){
            if(k != 4)
            {
                if(tab[i] - k != 4 && tab[i] - k >=0)
                {
                    Atab[i] = k;
                    Btab[i] = tab[i] - k;
                }
            }
        }
    }
}

int combine_A(int n){
    int a=0;
    for(int i = 0; i < n; i++)
    {
        a=a*10+Atab[n-i-1];
    }
    return a;
}

int combine_B(int n){
    int a=0;
    for(int i = 0; i < n; i++)
    {
        a=a*10+Btab[n-i-1];
    }
    return a;
}
int main(){
    int test_numb=0;
    int tests_tab[1000];
    scanf("%d",&test_numb);
    for(int i = 0; i < test_numb; i++){
        scanf("%d",&tests_tab[i]);
    }
    int n ;
    for(int i = 0; i < test_numb; i++){
        n = num_split(tests_tab[i]);
        divide_non_4(n);
        int A = combine_A(n);
        int B = combine_B(n);
        printf("Case #%d: %d %d\n",i+1,A,B);
    }
    return 0;
}