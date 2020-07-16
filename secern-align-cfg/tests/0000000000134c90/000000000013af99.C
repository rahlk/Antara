#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFSIZE 1000

char beats(const char move)
{
  switch (move)
  {
    case 'R': return 'P';
    case 'P': return 'S';
    case 'S': return 'R';
    default : return 'R';
  }
}

int main()
{
    // Declare vars
    char *buffer;
    size_t buffersize;
    unsigned long tests;
    unsigned long casenum;
    unsigned long adv;
    unsigned long advnum;
    char advmoves[255][500];
    int advmovelen[255];
    char advbeaten[255];
    char move;
    char mymoves[500];
    int movelen, i;
    unsigned long roundnum;
    size_t numread;
    char ok;
    
    // Determine buffer size
    buffer=malloc(BUFFSIZE);
    buffersize=BUFFSIZE;

    if (buffer==NULL)
      return 1;
    
    // Read the number of tests "T"
    if (getline(&buffer, &buffersize, stdin)<=0)
      return 1;
    
    // Convert "T" from a string to a number
    if (sscanf(buffer, "%ld", &tests)!=1)
      return 1;

    // Initialise case number
    casenum=1;
    
    // Loop for "T" inputs
    while (tests>0)
    {
      // Clear my moves list
      movelen=0;

      // Clear adversary moves list
      for (i=0; i<255; i++)
      {
        advmovelen[i]=0;
        advbeaten[i]=0;
      }

      // Read input "A"
      if (getline(&buffer, &buffersize, stdin)<=0)
        return 1;

      // Convert "A" from a string to a number
      if (sscanf(buffer, "%ld", &adv)!=1)
        return 1;

      // Read each adversairy moves
      for (advnum=0; advnum<adv; advnum++)
      {
        // Read input "C"
        numread=getline(&buffer, &buffersize, stdin);
        if (numread<=0)
          return 1;

        // Cache adverary moves
        memcpy(&advmoves[advnum][0], buffer, numread);
        advmovelen[advnum]=numread;

        for (i=0; i<numread; i++)
        {
          switch (advmoves[advnum][i])
          {
            case 'R':
            case 'P':
            case 'S':
              break;
            default:
              advmovelen[advnum]=i;
              break;
          }
        }
      }

///////////////

      // Process moves
      roundnum=0;
      advnum=adv;

      while (advnum>0)
      {
      move=0;

      // Find a move that will beat the first remaining adversary
      for (i=0; i<adv; i++)
      {
        // Ignore this one if we've already beaten it in previous round
        if ((advbeaten[i]!=1) && (move==0))
        {
          move=beats(advmoves[i][roundnum%advmovelen[i]]);
          break;
        }
      }

      // Check this move beats/draws all other opponents
      ok=0;
      for (i=0; i<adv; i++)
      {
        // Ignore this one if we've already beaten it
        if (advbeaten[i]!=1)
        {
          if ((move==beats(advmoves[i][roundnum%advmovelen[i]])) ||
              (move==advmoves[i][roundnum%advmovelen[i]]))
            ok++;
        }
      }

      if (ok==advnum)
      {
        // Beaten/drawn all remaining, we can move on to next round
        mymoves[movelen++]=move;

        // Mark the one(s) we've beaten as out
        for (i=0; i<adv; i++)
        {
          if (advbeaten[i]!=1)
          {
            if (move==beats(advmoves[i][roundnum%advmovelen[i]]))
            {
              advbeaten[i]=1;
              advnum--;
            }
          }
        }

        roundnum++;
      }
      else
      {
        // One or more not beaten, so try starting with a DRAW
        move=0;

        // Find a move that will draw the first remaining adversary
        for (i=0; i<adv; i++)
        {
          // Ignore this one if we've already beaten it in previous round
          if ((advbeaten[i]!=1) && (move==0))
          {
            move=advmoves[i][roundnum%advmovelen[i]];
            break;
          }
        }

        // Check this move beats/draws all other opponents
        ok=0;
        for (i=0; i<adv; i++)
        {
          // Ignore this one if we've already beaten it
          if (advbeaten[i]!=1)
          {
            if ((move==beats(advmoves[i][roundnum%advmovelen[i]])) ||
                (move==advmoves[i][roundnum%advmovelen[i]]))
              ok++;
          }
        }

      if (ok==advnum)
      {
        // Beaten/drawn all remaining, we can move on to next round
        mymoves[movelen++]=move;

        // Mark the one(s) we've beaten as out
        for (i=0; i<adv; i++)
        {
          if (advbeaten[i]!=1)
          {
            if (move==beats(advmoves[i][roundnum%advmovelen[i]]))
            {
              advbeaten[i]=1;
              advnum--;
            }
          }
        }

        roundnum++;
      }
      else
      {
        // Impossible
        break;
      }
      }

      }

//////////////

      // Output results
      printf("Case #%ld: ", casenum);

      if (advnum>0)
      {
        printf("IMPOSSIBLE");
      }
      else
      {
        for (i=0; i<movelen; i++)
          printf("%c", mymoves[i]);
      }

      printf("\n");
 
      // Decrement "T"
      tests--;
      casenum++;
    }

    free(buffer);
    
    return 0;
}
