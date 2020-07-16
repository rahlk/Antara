#include <stdio.h>
#include <stdlib.h>

int main(){

for(tcases=0;tcases<16;tcases++)
{
int imp;
int r,c,rc,cc; //rc,cc denote current row and column
int galaxy_grid[r-1][c-1];
int start_r,start_c;
int i,j;
// Need a starting position (Let's input for now)
scanf("%d %d\n",&r,&c);
scanf("%d %d\n",&start_r,&start_c);

rc = start_r;
cc = start_c;

for(i=0 ; galaxy_grid[i][j] == 0 ; i++)
{
  for(j=0 ; galaxy_grid[i][j] == 0 ; j++)
  {
    if(galaxy_grid[rc+2] == 0 && galaxy_grid[cc+1] == 0)
    {
      galaxy_grid[rc+2][cc+1] = 1;
      printf("%d %d\n",rc+2,cc+1);
      imp = 0;
    }

    else if(galaxy_grid[rc+2] == 0 && galaxy_grid[cc-1] == 0)
    {
      galaxy_grid[rc+2][cc+1] = 1;
      printf("%d %d\n",rc+2,cc-1);
      imp = 0;
    }

    else if(galaxy_grid[rc-2] == 0 && galaxy_grid[cc+1] == 0)
    {
      galaxy_grid[rc-2][cc+1] = 1;
      printf("%d %d\n",rc-2,cc+1);
      imp = 0;
    }

    else if(galaxy_grid[rc-2] == 0 && galaxy_grid[cc-1] == 0)
    {
      galaxy_grid[rc-2][cc-1] = 1;
      printf("%d %d\n",rc-2,cc-1);
      imp = 0;
    }

    else
      imp = 1;

    } // j loop ender }
} // i loop ender }

if(imp)
  printf("impossible\n"); // modify later to match given criteria

}
  return 0;
}
