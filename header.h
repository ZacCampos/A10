#ifndef HEADER_H_
#define HEADER_H_

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Heading();

void GetFiles(string &inFile, string &outFile);

void Input(const int ARRAY_SIZE, string namesAr[],
		   int idAr[], float balanceAr[], string inFile);

int SearchFunction(const int ARRAY_SIZE, string namesAr[],
				   string search, bool &found);

float AverageOfFloats();

#endif /* HEADER_H_ */
