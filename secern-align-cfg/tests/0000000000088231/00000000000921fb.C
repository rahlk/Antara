#include <stdio.h>
#include <stdlib.h>
void solve(char *c, char *a, char *b, int num);
void digit(int num_c, char *a, char *b, int ja, int jb);

void digit(int num_c, char *a, char *b, int ja, int jb){
    if(num_c == 9 || num_c == 7){
        a[ja] = '6';
        b[jb] = num_c-6+'0';
    }else if(num_c == 8){
        a[ja] = '7';
        b[jb] = '1';
    }else{
        a[ja] = '0'+(num_c>>1);
        b[jb] = '0'+num_c-a[ja]+'0';
    }
}

void solve(char *c, char *a, char *b, int num){
    int ja = 0;
    int jb = 0;
    int i = 0;
    if(num == 1){
        digit(c[0]-'0', a, b, 0, 0);
        i++;
        ja++;
        jb++;
    }else if((c[0]-'0') == 1){
        if((c[1]-'0') == 9){
            a[0] = '1';
            a[1] = '0';
            b[0] = '9';
            ja += 2;
            jb++;
        }else{
            digit(c[1]-'0'+10, a, b, 0, 0);
            ja++;
            jb++;
        }
        i += 2;
    }
    for( ; i<num; i++){
        digit(c[i]-'0', a, b, ja, jb);
        ja++;
        jb++;
    }
    a[101] = ja;
    b[101] = jb;
}

int main(){
    char *buf1 = malloc(1 << 23);
    char *buf2 = malloc(1 << 23);

    setvbuf(stdin, buf1, _IOFBF, 1 << 23);
    setvbuf(stdout, buf2, _IOFBF, 1 << 23);

    // freopen("case", "r", stdin);
    int t, j;
    int ja, jb;
    char c[102];
    char a[102]; 
    char b[102];
    scanf("%d", &t);
    getchar();
    for(int i=0; i<t; i++){
        j = 0;
        // while((c[j]=getchar())!=' '){
        //     j++;
        // }
        for(; j<102; j++){
            c[j] = getchar();
            if((c[j]==' ')||(c[j]=='\n')||(c[j]==EOF)){
                break;
            }
        }

        if (i == 0){
            printf("Case #%d: ", i + 1);
        }
        else{
            printf("\nCase #%d: ", i + 1);
        }

        solve(c, a, b, j);
        ja = a[101];
        jb = b[101];
        for(int k=0; k<ja; k++){
            printf("%c", a[k]);
        }
        printf(" ");
        for (int k = 0; k < jb; k++){
            printf("%c", b[k]);
        }
        // fflush(stdout);
    }

    return 0;
}