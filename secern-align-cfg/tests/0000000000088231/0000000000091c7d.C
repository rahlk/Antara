#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int fAddStringToResult(char* aResult, short aTestNumberShort, char* aStringA, char* aStringB) {
	char* aString;
	//aResult = strcat(aResult, "Case #");
	//aString = "[TEST]";
	sprintf(aString, "Case #%d: ", aTestNumberShort);
	//aString = '0' + aTestNumberShort;
	strcat(aResult, aString);
	//strcat(aResult, ": ");
	strcat(aResult, aStringA);
	strcat(aResult, " ");
	strcat(aResult, aStringB);
	strcat(aResult, "\n");
	return 0;
}*/

int main( ) {
    char aTestString[102];
    char aComplementString[102];
	char aResultString[20500];
    short aNumberOfTestsShort;
    short aTestsCompletedShort;
	short aCharIndexShort;
	short aComplementCharIndexShort;

    scanf("%d", &aNumberOfTestsShort);
    aTestsCompletedShort = 0;
	memset(aResultString, 0, sizeof(aResultString));
    while (aTestsCompletedShort < aNumberOfTestsShort) {
		memset(aTestString,0,sizeof(aTestString));
		memset(aComplementString,0,sizeof(aComplementString));
        scanf("%s", aTestString);
        aCharIndexShort = 0;
        aComplementCharIndexShort = 0;
		while (aCharIndexShort < strlen(aTestString)) {
			if (aTestString[aCharIndexShort] == '4') {
				aComplementString[aComplementCharIndexShort] = '1';
				aTestString[aCharIndexShort] = '3';
				aComplementCharIndexShort++;
			} else {
			    if (aComplementCharIndexShort > 0) {
				    aComplementString[aComplementCharIndexShort] = '0';
				    aComplementCharIndexShort++;
			    }
			}
			aCharIndexShort++;
		}
		aTestsCompletedShort++;
		fprintf(stdout, "Case #%d: %s %s\n", aTestsCompletedShort, aTestString, aComplementString);
		//fAddStringToResult(aResultString, aTestsCompletedShort, aTestString, aComplementString);
	}
	//fprintf(stdout, aResultString);
    return 0;
}