
#include "header.h"

void GetFiles(string &inFile, string &outFile)
{
	cout << "What input file would you like to use?  ";
	getline(cin, inFile);

	cout << "What output file would you like to use? ";
	getline(cin, outFile);

}
