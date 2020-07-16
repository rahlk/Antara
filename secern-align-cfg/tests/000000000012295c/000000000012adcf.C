#include <stdio.h>
#include <stdlib.h>

#define BUFFSIZE 256

int main()
{
    // Declare vars
    char *buffer;
    size_t buffersize;
    int tests;
    int casenum;
    int people, person;
    int gridsize;
    int px, py;
    char dir;
    int lx, ly;
    
    // Determine buffer size
    buffer=malloc(BUFFSIZE);
    buffersize=BUFFSIZE;

    if (buffer==NULL)
      return 1;
    
    // Read the number of tests "T"
    if (getline(&buffer, &buffersize, stdin)<=0)
      return 1;
    
    // Convert "T" from a string to a number
    if (sscanf(buffer, "%d", &tests)!=1)
      return 1;
    
    // Initialise case number
    casenum=1;

    // Loop for "T" inputs
    while (tests>0)
    {
      // Init likely X,Y
      lx=0; ly=0;

      // Read input "N Q"
      if (getline(&buffer, &buffersize, stdin)<=0)
        return 1;

      // Convert "N Q" from a string to a number
      if (sscanf(buffer, "%d %d", &people, &gridsize)!=2)
        return 1;

      for (person=0; person<people; person++)
      {
        if (getline(&buffer, &buffersize, stdin)<=0)
          return 1;

        // Convert "x y d" from a string to a number
        if (sscanf(buffer, "%d %d %c", &px, &py, &dir)!=3)
          return 1;

        // Narrow down likely location
        if ((px>lx) && (dir=='E'))
          lx=px+1;

        if ((px<lx) && (dir=='W'))
          lx=px-1;

        if ((py>ly) && (dir=='N'))
          ly=py+1;

        if ((py<ly) && (dir=='S'))
          ly=py-1;

        if (ly<0) ly=0;
        if (lx<0) lx=0;
        if (ly>gridsize) ly=gridsize;
        if (lx>gridsize) lx=gridsize;
      }

//      // Output results
      printf("Case #%d: %d %d\n", casenum, lx, ly);

      // Decrement "T"
      tests--;
      casenum++;
    }

    free(buffer);
    
    return 0;
}
