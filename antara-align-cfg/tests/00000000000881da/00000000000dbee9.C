#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <math.h>

void find_path(char **graph,int n, int t)
{
    int size = (2*n)-2;
    char my_path[size];
    int i=0, j=0, k=0;
    
    while(k<size) {
//        printf("graph[%d][%d] %c\n",i,j,graph[i][j]);
        //if(graph[i][j] == 'E' || j<n){
        if(graph[i][j] == 'E' ){
           j++;
           my_path[k] = 'S';
  //         printf("my_path[k] = 's';\n");
        } else if(graph[i][j] == 'S' ){
           i++;
           my_path[k] = 'E';
    //       printf("my_path[k] = 'e';\n");
        }else{
           if(my_path[k-1] =='S'){ 
                i++;
                my_path[k] = 'E';
           }else {
                j++;
                my_path[k] = 'S';
           }
        }
      //   printf("k %c\n",my_path[i]);
        k++;
    }
    printf("Case #%d: ",t);
    for(i=0; i<size; i++)
        printf("%c",my_path[i]);
}

int main()
{
    int test, t,i,j,k,n;
    char *lp = NULL,d;
    char **graph ;
    
    scanf("%d",&test);
    for(t=1; t<=test; t++) {
        scanf("%d",&n);
        graph = (char**)malloc(sizeof(char*) * n);
        for(i=0;i<n;i++)
            graph[i] = (char*)malloc(sizeof(char) * n);      

        //printf("g %c",graph[0][0]);

        i=0;
        j=0;
        for(k=0; k<(2*n)-2; k++) {
            scanf(" %c",&d);
          //      printf(" %d i %d , j %d k %d d %c\n",__LINE__,i,j,k,d);
        
            if(d =='E') {
                graph[i][j]= d;
            //    printf("%c g %c\n",d,  graph[i][j]);
                i++;
            }else{
                graph[i][j]= d;
              //  printf("%c g %c\n",d,  graph[i][j]);
                j++;
            }
        }
        find_path(graph,n,t);
        for(i=0; i<n;i++)
            free(graph[i]);
        free(graph);
    }
}
