#include<stdio.h>
#include<string.h>
int main(){
    int j=0,T,l=0;
    int *array,*a,*b;
    scanf("%d",&T);
    for (j=0;j<T;j++){
     char buf[110];
     scanf("%s",buf);
     l = strlen(buf);
     array = malloc(l * sizeof(int));
     a = malloc(l * sizeof(int));
     b = malloc(l * sizeof(int));
     int i=0;
     do{
       array[i] = buf[i]-'0';
       }while(buf[++i]);

     for(i=0;i<l;i++){
     if(array[i]==4)
        a[i]=1;
     else
        a[i]=array[i];
     }

   for ( i = l- 1; i >= 0; i--) {

            b[i] = array[i]-a[i];
        }

    printf("Case #%d: ",j+1);
   for(i=0;i<l;i++)
    printf("%d",a[i]);
   printf(" ");
   for(i=0;i<l;i++)
    printf("%d",b[i]);

    }

}
