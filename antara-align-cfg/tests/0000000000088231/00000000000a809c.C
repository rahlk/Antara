#include<stdio.h>
#include<stdlib.h>


int yr;
char name[20];
char op;
int ltpl[]={5,11,15,33,24,10};
int i;
int randm[49];
int *ltrptr=ltpl;
int *randpt=randm;
int weeks=0;

int main(int argc, char *argv[])
{
    start:
    
    printf("\nFirst Name");
    scanf("%s",&name);
    printf("how many years ");
    scanf("%d",&yr);
    weeks=yr*52;
    printf(" ok %s I will pay the lottery%d year",name,yr);
    sleep(1500);
    print("%d",get_lot(*randpt));
    system("PAUSE");
}
int *get_lot(int *randpt)
{
    for(i=0;i<weeks;i++)
    return randm;
}
void print_arrat(int *ltrptr)
{
    print("Hello");
}
int find_matches(int *ltrptr,int *randpt)
{
    
}