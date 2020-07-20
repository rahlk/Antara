#include <stdio.h>
#include <stdlib.h>
#define MAX 10000
void push(int cola[], int*tope, int valor);
void pop(int cola[], int*tope);
void peek(int cola[], int tope);

int main(){
int n=-1;
int valor, i;
int cola[MAX];
int tope=0;
   printf("Seleccione la opcion deseada.\n");
    while (n<=4){
printf(" 1.- Write a value.\n 2.- Delete.\n 3.- Show Values. \n");
printf("Opcion: ");
scanf("%d", &n);
switch (n){
 case 1:
  printf("introduzca un numero:  ");
   scanf("%d",&valor);
    if (valor==4){
        printf("Error \n");
    }
     else{
     push(cola, &tope, valor);
      for(i=0;i<=tope-1;i++){
       printf("%d\n", cola[i]);
  }
}
break;
 case 2:
if (tope==0){
   printf("Error\n\n\a");
 }
 else{
   pop(cola, &tope);
for(i=0;i<=tope-1;i++){
    printf("%d\n", cola[i]);
 }
}
break;
 case 3:
     peek(cola, tope);
    for(i=0;i<=tope-1;i++){
    printf("%d\n", cola[i]);
  }
break;
   default:
    printf("Opcion invalida.\n");
         break;
  }
 }
}
////////////////////////////////////////////
void push(int cola[], int*tope, int valor){
 if (tope<=MAX-1){
  cola[*tope]=NULL;
 }
 else{
    cola[*tope]= valor;
    (*tope)++;
 }
}
/////////////////////////////////////////////////////////////
void pop(int cola[], int*tope){
int var=0;
int i;
var=cola[0];
for(i=1;i<*tope;i++){
    cola[i-1]=cola[i];
  }
      (*tope)--;
      return var;
}

////////////////////////////////////////////////////////////////
void peek(int cola[], int tope){
int i;
if (tope==MAX-1){
  cola[tope]=NULL;
 }
}
//////////////////////////////////////////////////////////////
