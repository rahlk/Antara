#include <stdio.h>

int main() {
  int T, t;
  scanf("%d\n", &T);
  for (t=1; t<=T; t++) {
    char N[101], A[101]={'0'}, B[101]={'0'};
    gets(N);
    int i=0;
    if (N[0]=='1' && N[1]!='9') N[++i]+=10;
    A[i]=N[i]-1;
    while (A[i]>'9' || A[i]=='4') A[i]--;
    B[i]=N[i]-A[i]+'0';
    i++;
    for ( ; i<strlen(N); i++) {
      A[i]=N[i]=='4'?'2':N[i];
      B[i]=(N[i]=='4'?'2':'0');
    }
    printf("Case #%d: ", t);
    for (i=A[0]=='0'; i<strlen(N); i++) printf("%c", A[i]);
    printf(" ");
    puts(B[0]=='0'?B+1:B);
  }
} 