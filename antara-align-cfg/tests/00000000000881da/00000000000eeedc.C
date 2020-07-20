#include <stdio.h>
#include <string.h>

int main() {int t;
scanf(" %d",&t);

for(int i=0;i<t;++i)
{
    int n;
    char c;
    scanf(" %d",&n);
  
    for(int j=0;j<2*n-2;j++){
    scanf(" %c",&c);
    if(c=='S')printf("E");
    else printf("S");
    }

    
    printf("\n");
}
    return 0;
}

