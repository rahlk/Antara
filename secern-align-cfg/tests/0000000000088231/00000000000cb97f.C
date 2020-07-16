#include <stdio.h>
#include <stdlib.h>

struct digit
{
	int num;
	struct digit *next;
};
struct digit *readNumber(void);
struct digit *createDigit(int);
struct digit *append(struct digit *, struct digit *);
void printNumber(struct digit *);
void freeNumber(struct digit *);
struct digit *createFirst(struct digit *);
struct digit *createSecond(struct digit *, struct digit *);

int main(void)
{
	int T;
	struct digit *mainStart, *num1Start, *num2Start;
	scanf("%d\n", &T);
	for(int i = 0; i < T; ++i)
	{
	mainStart = readNumber();
	//printNumber(mainStart);
	num1Start = createFirst(mainStart);
	printNumber(num1Start);
	num2Start = createSecond(mainStart, num1Start);
	printNumber(num2Start);




	freeNumber(mainStart);
	freeNumber(num1Start);
	freeNumber(num2Start);
	}
	return 0;
}

struct digit *readNumber(void)
{
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c!='\n') {
        d = c - '0';
        newptr = createDigit(d);
        if (start==NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return start;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *createFirst(struct digit *mainStart)
{
	struct digit *ptr, *firstStart, *firstEnd, *newptr;
	ptr = mainStart;
	firstStart = NULL;
	while(ptr != NULL)
	{
		if(ptr->num == 4)
			newptr = createDigit(2);
		else
			newptr = createDigit(ptr->num);
		if(firstStart == NULL)
		{
			firstStart = newptr;
			firstEnd = firstStart;
		}
		else
			firstEnd = append(firstEnd, newptr);

		ptr = ptr->next;
	}
	return firstStart;
}

struct digit *createSecond(struct digit *mainStart, struct digit *num1Start)
{
	int unlock = 1;
	struct digit *mainTemp = mainStart, *num1Temp = num1Start, *num2Start = NULL, *num2End, *newptr;
	while(mainTemp != NULL)
	{
		if(unlock)
			while((mainTemp->num - num1Temp->num) == 0)
			{
				mainTemp = mainTemp->next;
				num1Temp = num1Temp->next;
			}
		unlock = 0;
		newptr = createDigit(mainTemp->num - num1Temp->num);
		if(num2Start == NULL)
		{
			num2Start = newptr;
			num2End = num2Start;
		}
		else
			num2End = append(num2End, newptr);
		mainTemp = mainTemp->next;
		num1Temp = num1Temp->next;
	}
	return num2Start;
}
