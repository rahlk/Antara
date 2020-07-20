#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n, i, eCount, sCount, myE, myS;
	int t,j;
	char lydiaPath[50000];
	char *ans;
		scanf("%d", &t);
		if(t>=1 && t<=100) {
			for(j=1; j<=t;j++) {
				scanf("%d", &n);
				eCount = 0; sCount = 0;myE = 0; myS=0;
				if(n>=2 && n<=50000) {
					scanf("%s", lydiaPath);
					// checking if lydiaPath has n-1 Es and Ss
					for(i=0; i<strlen(lydiaPath); i++) {
						if(lydiaPath[i] =='E') eCount++;
						else sCount++;
					}
					ans = (char *)malloc(strlen(lydiaPath)*sizeof(char));
					if(eCount == (n-1) && sCount == (n-1)) {
						//TODO all calculation here
						i = 0;
						while(i<strlen(lydiaPath)) {
							if(lydiaPath[i] =='E') {
								ans[i] = 'S';
								myS++;
							}
							else {
								ans[i] = 'E';
								myE++;
							}
							if(myS==(n-1) && myE==(n-1))
								break;
							i++;
						}
					/** Output Here*/
						
						printf("Case #%d: %s\n",j,ans);
					}// if of path check
				} //if of n
			} // for t
		} // if t
}