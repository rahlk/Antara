#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( ) {
	//Mirrors Lydia's moves. That way, no chance of collision and no complicated processing.
	//char aResultString[1]; //Print results as we go, instead of storing in string. Some test cases might be big at 100,000 moves.
    short aNumberOfTestsShort;
    short aTestsCompletedShort;
	long aCharIndexLong;
	long aMazeSizeLong;
	char aMovesString[100000];
	long aStringLengthLong;

    scanf("%d", &aNumberOfTestsShort);
    aTestsCompletedShort = 0;
    while (aTestsCompletedShort < aNumberOfTestsShort) {
        memset(aMovesString,0,sizeof(aMovesString));
		scanf("%d", &aMazeSizeLong); //Not needed, since I'm not exploring the maze, just mirroring Lydia.
		scanf("%s", aMovesString);
        aCharIndexLong = 0;
		aStringLengthLong = strlen(aMovesString);
		while (aCharIndexLong < aStringLengthLong) {
			if (aMovesString[aCharIndexLong] == 'S') {
				aMovesString[aCharIndexLong] = 'E';
			} else {
				aMovesString[aCharIndexLong] = 'S';
			}
			aCharIndexLong++;
		}
		aTestsCompletedShort++;
		fprintf(stdout, "Case #%d: %s\n", aTestsCompletedShort, aMovesString);
	}
    return 0;
}