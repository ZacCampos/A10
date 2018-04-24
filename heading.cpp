
#include "header.h"

void Heading()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -------------------------------------------------------------------------
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 **************************************************************************/

	const char PROGRAMMER[] = "Zac Campos";
	const char CLASS[]		= "CS1A";
	const char SECTION[]	= "MW: 8am";
	const int  ASSIGN_NUM	= 9;
	const char ASSIGN_NAME[]= "Functions";

	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : "	<< PROGRAMMER 	<< endl;
	cout << "*  "		<< setw(14) << "CLASS"		<< ": " << CLASS	<< endl;
	cout << "*  "		<< setw(14)	<< "SECTION"	<< ": " << SECTION  << endl;
	cout << "*  LAB #"<< setw(9) << ASSIGN_NUM	<< ": "	<< ASSIGN_NAME<< endl;
	cout << "***************************************************\n\n";
	cout << right;
}

