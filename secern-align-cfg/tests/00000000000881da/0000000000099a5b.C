#include<stdio.h>
#include<stdlib.h>

int main(){
	    int trials,n;
			    scanf("%d",&trials);
					    for(int i=1;i<=trials;i++){
								        scanf("%d",&n);
												        char *pathLydia = malloc(sizeof(char)*2*n-2);
																        char *pathSelf = malloc(sizeof(char)*2*n-1);
																				        pathSelf[2*n] = 0;
																								        scanf("%s",pathLydia);
																												        char *ptrLydia = pathLydia,*ptrSelf = pathSelf;
																																        const char *end = pathLydia+2*n;
																																				        while(ptrLydia != end){
																																									            switch(*ptrLydia){
																																																                case 'E': *ptrSelf = 'S'; break;
																																																								                case 'S': *ptrSelf = 'E'; break;
																																																																            }
																																																																						            ptrSelf++;
																																																																												            ptrLydia++;
																																																																																		        }
																																																																																						        printf("Case #%d: %s",i,pathSelf);
																																																																																										        free(pathLydia);
																																																																																														        free(pathSelf);
																																																																																																		    }
}
