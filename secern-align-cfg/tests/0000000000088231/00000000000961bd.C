#include <stdio.h>

int main()
{
    int t,n,i,j,f;
    scanf("%d",&t);
    int ct=1;
    while(t--){
    f=0;    
    j=0;
	char s[101],a[101];
	scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='4'){
            s[i]='2';
            a[j]='2';
            f=1;
            j++;
        }
        else{
            if(f==1){
                a[j]='0';
                j++;
            }
        }
	}
	j++;
	a[j]='\0';
    printf("Case #%d: %s %s\n",ct,s,a);
    ct++;
    }
    return 0;
}