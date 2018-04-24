#ifndef HEADER_H_
#define HEADER_H_

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Heading();

void Input(const int ARRAY_SIZE, string namesAr[],
		   int idAr[], float balanceAr[], string fileName);


float AverageOfFloats();

#endif /* HEADER_H_ */
