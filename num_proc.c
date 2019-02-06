#include <limits.h>

int number = 0;
int maximum = INT_MAX;

int getNumber()
{
	return number;
}


void incrementNumber()
{
	number++;
	if (maximum == number)
		number = 0;
}

void setMaximumValue(int maximumValue)
{
	maximum = maximumValue;
}  
