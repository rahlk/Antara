#include <stdio.h>
#include <stdlib.h>

#define BUFFSIZE 256

int main()
{
    // Declare vars
    char *buffer;
    char *buffer2;
    size_t buffersize;
    int tests;
    int casenum;
    int pos;
    
    // Determine buffer size
    buffer=malloc(BUFFSIZE);
    buffer2=malloc(BUFFSIZE);
    buffersize=BUFFSIZE;

    if ((buffer==NULL) || (buffer2==NULL))
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
    
      // Process input "N" converting '4' to '3' and marking in second buffer when this takes place
      for (pos=0; pos<buffersize; pos++)
      {
        // Check for end of line
        if ((buffer[pos]=='\r') || (buffer[pos]=='\n') || (buffer[pos]==0))
        {
          buffer[pos]=0;
          buffer2[pos]=0;
          break;
        }
        
        // If '4' encountered convert to '3'
        if (buffer[pos]=='4')
        {
          buffer[pos]='3';
          buffer2[pos]='1';
        }
        else
          buffer2[pos]='0';
      }
      
      // Output results
      printf("Case #%d: %s", casenum, buffer);
      pos=0;
      // Skip over leading zeros in second buffer
      while (buffer2[pos]=='0')
        pos++;
      printf(" %s\n", &buffer2[pos]);
        
      // Decrement "T"
      tests--;
      casenum++;
    }

    free(buffer2);
    free(buffer);
    
    return 0;
}