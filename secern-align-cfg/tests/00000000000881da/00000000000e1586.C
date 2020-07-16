#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
char e, A[e];
int i, size;
printf ("Enter size: ");
scanf ("%d", &size);
size=size*2-2;
for (i=0;i<=size;i++){
	scanf ("%c", &A[e]);
}
printf ("\n");
for (i=0;i<=size;i++){
	switch (A[e]){
		case 'E': printf ("S"); break;
		case 'S': printf ("E"); break;
	}
}
}