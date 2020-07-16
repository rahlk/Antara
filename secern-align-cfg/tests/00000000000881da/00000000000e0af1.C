#include <stdio.h>
#include <stdlib.h>

#define BUFFSIZE 60000

int main()
{
    // Declare vars
    char *buffer;
    size_t buffersize;
    int tests;
    int casenum;
    int pos;
    
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
      // Read input "N"
      if (getline(&buffer, &buffersize, stdin)<=0)
        return 1;

       // Read alternate route
      if (getline(&buffer, &buffersize, stdin)<=0)
        return 1;
    
      // Output results
      printf("Case #%d: ", casenum);
        
      // Process input "N" swapping 'S' and 'E'
      for (pos=0; pos<buffersize; pos++)
      {
        // Check for end of line
        if ((buffer[pos]=='\r') || (buffer[pos]=='\n') || (buffer[pos]==0))
        {
          buffer[pos]=0;
          break;
        }
        else
        {
          switch (buffer[pos])
          {
            case 'E': printf("S"); break;
            case 'S': printf("E"); break;
            default: break;
          }
        }
      }
      printf("\n");
      
      // Decrement "T"
      tests--;
      casenum++;
    }

    free(buffer);
    
    return 0;
}
