#include <stdio.h>
#include <stdlib.h>
typedef struct{
int xpos;
int ypos;
int islydia;
}element;
typedef struct{
    int size;
    element elements[100][100];
    char lydiapath[100];
    char solutionpath[100];
}test_case;
int main()
{int t,size;
    /*Input the size,and Lydia's path*/
    scanf("%d",&t);
    test_case cases[t];
    for(int i=0;i<t;i++){
    scanf("%d",&size);
    scanf("%s",cases[i].lydiapath);
    element maze[size][size];
    for(int m=0;m<size;m++){
        for(int k=0;k<size;k++){
            maze[m][k].islydia=0;
        }}
    /*Plot Lydia's path in a 2D Array*/
    int xpos=0,ypos=0;
    maze[0][0].islydia=1;
    for(int k=0;cases[i].lydiapath[k]!='\0';k++){
     if(cases[i].lydiapath[k]=='S'){
     maze[++ypos][xpos].islydia=1;
     }
     else {
     maze[ypos][++xpos].islydia=1;
     }
     }
     /*Form an alternative path*/
    xpos=0;ypos=0;
    for(int k=0;cases[i].lydiapath[k]!='\0';k++){
     if(maze[ypos][xpos+1].islydia==1){
     cases[i].solutionpath[k]='S';
     xpos++;
     }
     else{
     cases[i].solutionpath[k]='E';
     ypos++;
     }
    }
    }
    /*Output the alternative path*/
    for(int i=0;i<t;i++){
            printf("Case #%d: ",i+1);
    for(int z=0;cases[i].solutionpath[z]=='E' || cases[i].solutionpath[z]=='S';z++){
            printf("%c",cases[i].solutionpath[z]);}
    printf("\n");
    }
    return 0;
}
