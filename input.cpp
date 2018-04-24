

#include "header.h"

void Input(const int ARRAY_SIZE, string namesAr[],
		   int idAr[], float balanceAr[], string inFile)
{
	ifstream fin;
	fin.open(inFile.c_str());

	for(int index = 0; index < ARRAY_SIZE; index++)
	{
		getline(fin, namesAr[index]);

		fin >> idAr[index];

		fin >> balanceAr[index];

		fin.ignore(1000, '\n');
	}
	fin.close();
}


