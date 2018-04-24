

#include "header.h"

int main()
{
	Heading();

	const int ARRAY_SIZE = 10;

	string namesAr[ARRAY_SIZE];
	int idAr[ARRAY_SIZE];
	float balanceAr[ARRAY_SIZE];
	string inFile;
	string outFile;
	string search;
	int index;
	index = 0;
	bool found = false;

	GetFiles(inFile, outFile);

	Input(ARRAY_SIZE, namesAr, idAr, balanceAr, inFile);

	cout << "Who do you want to search for (Enter done to exit): ";
	getline(cin, search);

	index = SearchFunction(ARRAY_SIZE, namesAr, search, found);

	cout << namesAr[index] << endl;
	cout << idAr[index] << endl;
	cout << balanceAr[index];









	return 0;
}
