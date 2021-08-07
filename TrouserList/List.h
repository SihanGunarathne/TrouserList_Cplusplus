#pragma once

#include "trousernode.h"
#include <string>
#include <iostream>
using namespace std;

class List
{
public:
	List();
	void insertfront(int modelnum, string tsize, string tcolour);       //Define the list functions
	void insertend(int modelnum, string tsize, string tcolour);
	void insertpos(int pos, int modelnum, string tsize, string tcolour);
	void deleteid(int modelnum);
	void deletepos(int pos);
	void printlist();
	virtual ~List();

protected:

private:
	int numitem = 0;
	trousernode* head = NULL;
	trousernode* tail = NULL;
};

