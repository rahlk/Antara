
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int tottest,testcase;

		scanf("%d\n", &tottest);
		for (testcase=1; testcase <= tottest; testcase++){
			int nval,bval,fval,bval1;

			scanf("%d", &nval);
			scanf("%d", &bval);
			scanf("%d", &fval);
			int arr1[nval];
			char str1[nval],valu[bval];
			bval1=bval;
			for (int ai = 0;ai < fval;ai++){
				int ai1=0, ai2=0;
				while(ai1<nval){
					for(ai2=0;ai2<=ai;ai2++){
						if(ai1 >= nval){break;};
						str1[ai1]= '1';
						ai1++;
					}
					for(ai2=0;ai2<=ai;ai2++){
						if(ai1 >= nval){break;};
						str1[ai1]= '0';
						ai1++;
					}
				}
for(int az = 0;az<nval;az++){

				printf("%c",str1[az]);}
				fflush(stdout);
fflush(stdout);

				scanf("%s", valu);

				int ae1=0, ae2=0;

				for(;ae1<nval;ae1++){
					if(str1[ae1] == valu[ae1 - ae2]){
						arr1[ae1] = 10 + ai ;
					}else{
						arr1[ae1] = 30 + ai ;
						ae2++;
					}
				}

				bval1 = bval1/2 +1;

				if(ai>=bval1){
					for(int af=0;af<nval;af++){
						if(arr1[af]>21){
							printf("%d ",af);
						}
					}
					scanf("%d", &ae1);
					if(ae1 != 1){
						return 0;
					}
free(arr1); free(str1); free(valu);
printf("\n");

					break;
				}


			}

		}
		return 0;
	}
