#pragma once
//#include "trouser.h""
#include <iostream>
#include <string>
using namespace std;

class trousernode
{
public:

	int id;
	string size;
	string color;
	trousernode();
	//Define the variables in node
	//trouser sk;

	trousernode* prev;      //Define pointers of previous and next node
	trousernode* next;
	~trousernode();

protected:

private:
};
