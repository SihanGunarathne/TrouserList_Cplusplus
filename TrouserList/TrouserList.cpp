//  NAME    :  GUNARATHNE R.M.S.S.
//  REG NO  :  EG/2017/3171


#include <iostream>
#include "trousernode.h"
#include "List.h"

using namespace std;

int main()
{
	cout << "id\t size\t\tcolor\n\n";
	List store;

	store.insertfront(10, "34inch", "Red");     //Insert to the front of linked list
	store.insertfront(12, "32inch", "Black");
	store.insertend(45, "30inch", "Brown");       //Insert to the end of linked list
	store.insertend(36, "28inch", "White");
	store.printlist();

	cout << "------------------------------------------------------------------------------------------------\n";

	//position start from 0     [0 1 2 3 4 5 6 ........]
	store.insertpos(1, 89, "36inch", "Yellow");       //Insert to the given position
	store.printlist();
	cout << "------------------------------------------------------------------------------------------------\n";

	store.deleteid(45);                          //Delete using given key value
	store.printlist();
	cout << "------------------------------------------------------------------------------------------------\n";

	store.deletepos(2);                          //Delete using position value
	store.printlist();
	cout << "------------------------------------------------------------------------------------------------\n";

	store.~List();                               //Delete whole linked list
	store.printlist();
	cout << "------------------------------------------------------------------------------------------------\n";

	store.insertfront(31, "26inch", "Green");    //Insert to the front of new linked list
	store.printlist();
	cout << "------------------------------------------------------------------------------------------------\n";

	return 0;
}


