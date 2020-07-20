#include <stdio.h>

#define MAXN 1024
#define MAX_BAD 15


#define DBG_PRINT (0)
#define LOG_FILE "myLog.txt"

typedef struct _badArea
{
	int minIdx;
	int maxIdx;
	int count;
}stBadArea;
typedef struct _setValues
{
	int minIdx;
	int maxIdx;
	int value;
	int skip;
	int badAreaIdx;
	int badBlockCount;
}stSetValues;

unsigned char arrN[MAXN];
unsigned char resultN[MAXN + 3];
stBadArea badArea[MAXN];
stSetValues settingValues[MAXN];
int arrBadIdx[MAX_BAD];

FILE *logFile;

int createTestValue(unsigned char arr[], stBadArea badArea[], int badAreaCount)
{
	int badIdx;
	int i;
	int valueSetCount = 0;

	for (badIdx = 0; badIdx < badAreaCount; badIdx++)
	{
		int badCount = badArea[badIdx].count;
		int maxIdx = badArea[badIdx].maxIdx;
		int minIdx = badArea[badIdx].minIdx;

		if (badCount == 0 || ((maxIdx - minIdx + 1) == badCount))		// there is no BAD value or All BAD value, set all 1
		{
			for (i = minIdx; i <= maxIdx; i++)
			{
				arr[i] = 1;
			}
			settingValues[valueSetCount].badAreaIdx = badIdx;
			settingValues[valueSetCount].badBlockCount = badCount;
			settingValues[valueSetCount].skip = ((maxIdx - minIdx + 1) == badCount);
			settingValues[valueSetCount].minIdx = minIdx;
			settingValues[valueSetCount].maxIdx = maxIdx;
			settingValues[valueSetCount++].value = 1;
		}
		else if (badCount > (maxIdx - minIdx + 1) / 2)	// too much then, set half 1, halt 0
		{
			int half = (maxIdx - minIdx + 1) / 2;
			for (i = minIdx; i <= maxIdx; i++)
			{
				if (half > 0)
				{
					arr[i] = 1;
				}
				else
				{
					arr[i] = 0;
				}
				half--;
				if (half == 0)	// trigger
				{
					settingValues[valueSetCount].badAreaIdx = badIdx;
					settingValues[valueSetCount].badBlockCount = badCount;
					settingValues[valueSetCount].skip = 0;
					settingValues[valueSetCount].minIdx = minIdx;
					settingValues[valueSetCount].maxIdx = i;
					settingValues[valueSetCount++].value = 1;
					settingValues[valueSetCount].badAreaIdx = badIdx;
					settingValues[valueSetCount].badBlockCount = badCount;
					settingValues[valueSetCount].skip = 0;
					settingValues[valueSetCount].minIdx = i + 1;
				}
			}
			settingValues[valueSetCount].maxIdx = maxIdx;
			settingValues[valueSetCount++].value = 0;
		}
		else
		{
			int triggerCount = badCount;
			int setValue = 1;
			settingValues[valueSetCount].badAreaIdx = badIdx;
			settingValues[valueSetCount].badBlockCount = badCount;
			settingValues[valueSetCount].skip = 0;
			settingValues[valueSetCount].minIdx = minIdx;
			for (i = minIdx; i <= maxIdx; i++)
			{
				if (triggerCount > 0)
				{
					arr[i] = setValue;
				}
				triggerCount--;
				if (triggerCount == 0)
				{
					if (i < maxIdx)
					{
						settingValues[valueSetCount].maxIdx = i;
						settingValues[valueSetCount++].value = setValue;
						settingValues[valueSetCount].badAreaIdx = badIdx;
						settingValues[valueSetCount].badBlockCount = badCount;
						settingValues[valueSetCount].skip = 0;
						settingValues[valueSetCount].minIdx = i + 1;
						setValue = (setValue == 1) ? 0 : 1;
					}

					triggerCount = badCount;
				}
			}
			settingValues[valueSetCount].maxIdx = maxIdx;
			settingValues[valueSetCount++].value = setValue;

		}
	}
	return valueSetCount;
}
void printArr(unsigned char arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
		
	}
	printf("\n");
	fflush(stdout);
}


int main(void)
{
	int T, testcase;
	int N;
	int B, F;
#if DBG_PRINT
	logFile = fopen(LOG_FILE, "w");
#endif
	scanf("%d", &T);

	for (testcase = 0; testcase < T; testcase++)
	{
		int i;
		int foundAreaCount = 1;
		int foundBadCount = 0;
		int result;
		// ignore F, we can always get answer before 5'th test
		scanf("%d %d %d", &N, &B, &F);
		getchar();

		// initialize
		badArea[0].count = B;
		badArea[0].minIdx = 0;
		badArea[0].maxIdx = N - 1;
#if DBG_PRINT
		fprintf(logFile, "TEST Start. N : %d, B : %d, F : %d\n", N, B, F);
#endif
		for (i = 0; i < MAX_BAD; i++)
		{
			arrBadIdx[i] = -1;
		}

		do
		{
			int idxResult = 0;
			int valueSetCount = 0;
			int befBadAreaIdx = -1;
			int startIdx = 0;
			foundBadCount = 0;
			// set value
			valueSetCount = createTestValue(arrN, badArea, foundAreaCount);
		
			// test
			printArr(arrN, N);
#if DBG_PRINT
			fprintf(logFile, "ValueSetCount : %d\n", valueSetCount);
			for (i = 0; i < valueSetCount; i++)
			{
				fprintf(logFile, "[%d] min : %d, max : %d, value : %d\n", i, settingValues[i].minIdx, settingValues[i].maxIdx,
					settingValues[i].value);
			}
#endif
			// get Result
			fgets(resultN, sizeof(resultN), stdin);
#if DBG_PRINT
			fprintf(logFile, "GetValue : %s\n", resultN);
#endif
			foundAreaCount = 0;
			for (i = 0; i < valueSetCount; i++)
			{
				int realCount = 0; 
				int idx = 0;
				int max_cnt = settingValues[i].maxIdx - settingValues[i].minIdx + 1;

				// checking before status! if didn't found bad path but it is exist, last one is bad block
				if (befBadAreaIdx != -1 && befBadAreaIdx != settingValues[i].badAreaIdx)
				{
					int totalCount = 0;
					int k;
					for (k = startIdx; k < foundAreaCount; k++)
					{
						totalCount += badArea[k].count;
					}
					if (settingValues[i-1].badBlockCount != totalCount)
					{
						int remainDiff = settingValues[i - 1].badBlockCount - totalCount;
#if DBG_PRINT
						fprintf(logFile, "Total Count is not same. Real : %d, calc : %d(idx : %d startIdx : %d)\n", settingValues[i - 1].badBlockCount
						, totalCount, i-1, startIdx);
#endif

						for (k = foundAreaCount - 1; k >= startIdx && remainDiff > 0; k--)
						{
							int inc = badArea[k].maxIdx - badArea[k].minIdx + 1 - badArea[k].count;
							if (remainDiff < inc)
							{
								inc = remainDiff;
							}
							badArea[k].count += inc;
							remainDiff -= inc;
#if DBG_PRINT
							fprintf(logFile, "Fix count. idx[%d] to %d, result : %d\n", k, inc, badArea[k].count);
#endif
						}
						idxResult -= (settingValues[i - 1].badBlockCount - totalCount);
					}
					startIdx = i;
				}

				befBadAreaIdx = settingValues[i].badAreaIdx;
				// check count
				for (idx = 0; settingValues[i].skip == 0 && idx < max_cnt; idx++)
				{
					if (resultN[idxResult] != '0' + settingValues[i].value)
					{
						break;
					}
					idxResult++;
					realCount++;
				}
				badArea[foundAreaCount].minIdx = settingValues[i].minIdx;
				badArea[foundAreaCount].maxIdx = settingValues[i].maxIdx;
				badArea[foundAreaCount].count = max_cnt - realCount;
				foundAreaCount++;
			}

			for (i = 0; i < foundAreaCount; i++)
			{
				int j;
				if (badArea[i].maxIdx - badArea[i].minIdx + 1 == badArea[i].count)
				{
					for (j = 0; j < badArea[i].count; j++)
					{
						arrBadIdx[j + foundBadCount] = badArea[i].minIdx + j;
					}
					foundBadCount += badArea[i].count;

				}
#if DBG_PRINT
				fprintf(logFile, "[%d] min : %d, max : %d, count : %d\n", i, badArea[i].minIdx, badArea[i].maxIdx, badArea[i].count);
#endif
			}
#if DBG_PRINT
			fprintf(logFile, "currenlty Bad ID is : ");
			for (i = 0; i < foundBadCount; i++)
			{
				fprintf(logFile, "%d ", arrBadIdx[i]);
			}
			fprintf(logFile, "\n");
#endif
		} while (foundBadCount < B);
#if DBG_PRINT
		fprintf(logFile, "The End!!\n");
		fprintf(logFile, "Finally Found Bad id is : ");
#endif

		for (i = 0; i < foundBadCount; i++)
		{
			printf("%d ", arrBadIdx[i]);
#if DBG_PRINT
			fprintf(logFile, "%d ", arrBadIdx[i]);
#endif
		}
		printf("\n");
#if DBG_PRINT
		fprintf(logFile, "\n");
#endif
		fflush(stdout);
		scanf("%d", &result);
	}
#if DBG_PRINT
	fclose(logFile);
#endif
	return 0;
}