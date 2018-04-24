

#include "header.h"

void Input(const int ARRAY_SIZE, string namesAr[],
		   int idAr[], float balanceAr[], string fileName)
{
	ifstream fin;
	fin.open(fileName.c_str());

	for(int index = 0; index < ARRAY_SIZE; index++)
	{
		getline(fin, namesAr[index]);

		fin >> idAr[index];

		fin >> balanceAr[index];

		fin.ignore(1000, '\n');
	}

	for(int index = 0; index < ARRAY_SIZE; index++)
	{
		cout << namesAr[index] << endl;
		cout << idAr[index] << endl;
		cout << balanceAr[index] << endl << endl;
	}
}
