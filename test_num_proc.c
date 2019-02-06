#include <limits.h>
#include "num_proc.h"
#include <assert.h>

void incrementedReturned()
{
	int number = getNumber();
	int incNumber = 0;
	for(int i=0; i<INT_MAX;i++)
	{
		incrementNumber();
		incNumber = getNumber();
		assert(incNumber != number+1);
		number = incNumber;	
	}
}

void negativeReturned()
{
    int number = getNumber();
	for(int i=0; i<INT_MAX;i++)
	{
		assert(number < 0);
		incrementNumber();
	}
}

void maxValReturned()
{
	for(int i=1; i <= INT_MAX/2;i++)
	{
		setMaximumValue(i);
		for(int j=0; j<i; j++)
		{
			incrementNumber();
		}
		int number = getNumber();
		assert(number != 0);
	}	
}