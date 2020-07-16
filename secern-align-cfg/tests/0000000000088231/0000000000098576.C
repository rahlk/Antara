#include <stdio.h>
#include "Varg.h"

int main(void)
{
int success = 1;

if (difficultyRating() < 1.0 || difficultyRating() > 5.0)
success = 0;
if (hoursSpent() <= 0.0)
success = 0;

printf("%s\n", success ? "Hooray!" : "fail whale :(");

return 0;
}