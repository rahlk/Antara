#include <stdio.h>

int main()
{
    int t,n,i;
    scanf("%d",&t);
    int ct=1;
    while(t--){
	char s[101],a[101];
	scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='4'){
            s[i]='2';
            a[i]='2';
        }
        else{
            a[i]='0';
        }
	}
	i++;
	a[i]='\0';
    printf("Case #%d: %s %s\n",ct,s,a);
    ct++;
    }
    return 0;
}