
#ifndef COSTOMER_H
#define COSTOMER_H
#include <iostream>
#include "linkedlist.h"
 
using namespace std;
struct Account  {
	int Number;
	string Type;
	string IBAN;
	int Branch_code;
	string Name;
	string Date;
	string Statue;
	int Balance;
	doublylist* loan;
	stack* transaction;
};
#endif // !COSTOMER_H
