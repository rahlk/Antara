#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <math.h>
int n;
void find_path(char graph[][n],int n, int t)
{
    int size = (2*n)-2;
    char my_path[size];
    int i=0, j=0, k=0;
    
    while(i<n && j<n) {
        if(graph[i][j] == 'E' ){
           j++;
           my_path[k] = 'S';
           } else if(graph[i][j] == 'S' ){
           i++;
           my_path[k] = 'E';
              }else{
           if(my_path[k-1] =='s'){ 
                i++;
                my_path[k] = 'E';
           }else {
                j++;
                my_path[k] = 'S';
           }
        }
         
        k++;
    }
    printf("Case #%d:",t);
    for(i=0; i<size; i++)
        printf("%c",my_path[i]);
}

int main()
{
    int test, t,i,j,k;
    char *lp = NULL,d;
        //char **graph ;= malloc(size);
    
    scanf("%d",&test);
    for(t=1; t<=test; t++) {
        scanf("%d",&n);
        char graph[n][n];
        bzero(graph,(n*n));
        i=0;
        j=0;
        for(k=0; k<(2*n)-2; k++) {
            scanf(" %c",&d);
               // printf(" %d i %d , j %d k %d d %c\n",__LINE__,i,j,k,d);
        
            if(d =='E') {
                graph[i][j]= d;
                //printf("%c g %c\n",d,  graph[i][j]);
                i++;
            }else{
                graph[i][j]= d;
                //printf("%c g %c\n",d,  graph[i][j]);
                j++;
            }
        }
        find_path(graph,n,t);
        //free(graph);
    }
}
