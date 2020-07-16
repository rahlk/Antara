#include<stdio.h>
#include<stdlib.h>

int main(void){
	int t,count=1;
	scanf("%d",&t);
	while(t--){
		long int p,q;
		scanf("%ld %ld",&p,&q);
		long int x[p],y[p],nC=0,sC=0,eC=0,wC=0,*nDC,*sDC,*wDC,*eDC,i,j,*row,*col,xVal=0,yVal=0;
		long long int maxRow=0,maxCol=0;
		nDC = (long int*) calloc(q+1,sizeof(long int));
		sDC = (long int*) calloc(q+1,sizeof(long int));
		wDC = (long int*) calloc(q+1,sizeof(long int));
		eDC = (long int*) calloc(q+1,sizeof(long int));
		row = (long int*) calloc(q+1,sizeof(long int));
		col = (long int*) calloc(q+1,sizeof(long int));
		char d[p];
		for(i=0;i<p;i++) {
			scanf("%ld %ld %c",&x[i],&y[i],&d[i]);
			
			
		}
		for(i=0;i<p;i++){
			if(d[i]=='N'){
				nC++;
				nDC[y[i]+1]++;
				
			}
			else if(d[i]=='S'){
				sC++;
				sDC[y[i]-1]++;
				
			}
			else if(d[i]=='E'){
				eC++;
				eDC[x[i]+1]++;
				
			}
			else if(d[i]=='W'){
				wC++;
				wDC[x[i]-1]++;
				
			}
		}
		//for(i=0;i<=q;i++) printf("north=%ld south=%ld east=%ld west=%ld\n",nDC[i],sDC[i],eDC[i],wDC[i]);
		for(i=0,j=q;i<q;i++,j--){
			nDC[i+1] += nDC[i];
			eDC[i+1] += eDC[i];
			sDC[j-1] += sDC[j];
			wDC[j-1] += wDC[j];
		}
		for(i=0;i<=q;i++){
			col[i] = nDC[i]+sDC[i];
			row[i] = eDC[i]+wDC[i];
			if(col[i]>maxCol) {
				maxCol=col[i];
				yVal = i;
			}
			if(row[i]>maxRow) {
				maxRow=row[i];
				xVal = i;
			}
		}
		//printf("After\n");
		//for(i=0;i<=q;i++) printf("north=%ld south=%ld east=%ld west=%ld,row=%ld col=%ld\n",nDC[i],sDC[i],eDC[i],wDC[i],row[i],col[i]);
		printf("Case #%d: %ld %ld\n",count,xVal,yVal);
		count++;
	}
	return 0;
}