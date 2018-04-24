

#include "header.h"

int SearchFunction(const int ARRAY_SIZE, string namesAr[],
				   string search, bool &found)
{
	int newIndex;
	newIndex = 0;
	int index;
	index = 0;

	while(index < ARRAY_SIZE)
	{
		if(namesAr[index] == search)
		{
			newIndex = index;
			found = true;
		}
		else
		{
			index++;
		}
	}

	return newIndex;
}
