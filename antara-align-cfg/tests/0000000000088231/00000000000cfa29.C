#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Test=1;

int puissance(int nbfois){
	int exp=1;
	for(int i=0;i<nbfois;i++){
		exp*=10;
	}
	return exp;
}

void look_Four(char* tbValue, long taille ){

	int j; 
	long A=atol(tbValue);
	long B=0;
	
   for(j=0;j<taille;j++){
   		long pow=taille-j-1;
        if (tbValue[j]=='4'){

            A-=puissance(pow);
            B+=puissance(pow);
        }

    }    
    printf("Case #%d: %ld %ld\n",Test,A, B);
}


int main(){

	int nbTest;
	scanf("%d",&nbTest);

	int i=0;
	char tbValue[101];

	for(i=0;i<nbTest;i++){
	    scanf("%s",tbValue);
	    int taille = strlen(tbValue);
	    look_Four(tbValue, taille);
	    Test++;
	}


}