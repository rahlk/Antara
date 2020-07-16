#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

const int MAX_T = 100;

const char CH0 = (char)48;
const char CH2 = (char)50;
const char CH4 = (char)52;

void Solve(int nTestNo, char *pszBuf)
{
	if (!pszBuf)
	{
		printf("empty solve target \n");
		return;
	}

	int nLength = strlen(pszBuf);
	std::vector<char> vtA, vtB;

	bool b4Find = false;
	for (int iter = 0; iter < nLength; iter++)
	{
		if (pszBuf[iter] != CH4)
		{
			vtA.push_back(pszBuf[iter]);
			if(b4Find)
				vtB.push_back(CH0);
		}
		else
		{
			b4Find = true;
			vtA.push_back(CH2);
			vtB.push_back(CH2);
		}
	}

	std::string strA(vtA.begin(), vtA.end());
	std::string strB(vtB.begin(), vtB.end());

	char szOutput[255];
	memset(szOutput, 0, 255);
	sprintf(szOutput, "Case #%d: %s %s\n", nTestNo, strA.c_str(), strB.c_str());

	FILE* pFile;
	pFile = fopen(".\\output.txt", "a");
	fputs(szOutput, pFile);
	if (pFile)
		fclose(pFile);
	
}

int main(int argc, char* argv[])
{
	int nT;

	FILE* pFile;
	pFile = fopen(argv[1], "r");
	if (pFile != NULL)
	{
		int nLineNo = 0;
		while (!feof(pFile))
		{
			char szBuf[255];
			fgets(szBuf, sizeof(szBuf), pFile);
			szBuf[strlen(szBuf) - 1] = '\0';
			if (nLineNo == 0)
			{
				nT = atoi(szBuf);
				if (nT < 1 || MAX_T < nT)
				{
					printf("Too much test case \n");
					break;
				}
			}
			else
			{
				Solve(nLineNo, szBuf);
			}

			nLineNo++;
		}
	}
	else
	{
		printf("cant't read input : %s\n", argv[1]);
	}

	if (pFile)
		fclose(pFile);
	
	return 0;
}