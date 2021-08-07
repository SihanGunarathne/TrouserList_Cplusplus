#include "List.h"
#include <iostream>

List::List()
{
	//ctor
}

void List::insertfront(int modelnum, string tsize, string tcolour) {      //Insert to the front of linked list

	trousernode* temp = new trousernode;

	if (head == NULL) {
		numitem++;
		temp->id = modelnum;
		temp->size = tsize;
		temp->color = tcolour;

		temp->prev = NULL;
		temp->next = NULL;

		head = temp;
		tail = temp;
	}
	else {

		numitem++;
		temp->id = modelnum;
		temp->size = tsize;
		temp->color = tcolour;

		temp->next = head;
		head->prev = temp;
		temp->prev = NULL;
		head = temp;
	}

}

void List::insertend(int modelnum, string tsize, string tcolour) {    //Insert to the end of linked list

	trousernode* temp = new trousernode;

	if (tail == NULL) {
		numitem++;
		temp->id = modelnum;
		temp->size = tsize;
		temp->color = tcolour;

		temp->prev = NULL;
		temp->next = NULL;

		head = temp;
		tail = temp;
	}
	else {

		numitem++;
		temp->id = modelnum;
		temp->size = tsize;
		temp->color = tcolour;

		temp->prev = tail;
		tail->next = temp;
		temp->next = NULL;
		tail = temp;

	}
}

void List::insertpos(int pos, int modelnum, string tsize, string tcolour) {     //Insert to the given position

	if (pos > 0 && pos < numitem) {

		trousernode* current = head;

		for (int i = 0; i <= (pos - 2); i++) {
			current = current->next;
		}
		trousernode* temp = new trousernode;
		numitem++;

		temp->id = modelnum;
		temp->size = tsize;
		temp->color = tcolour;

		temp->next = current->next;
		current->next->prev = temp;
		current->next = temp;
		temp->prev = current;

	}
	else if (pos == numitem) {

		insertend(modelnum, tsize, tcolour);

	}
	else if (pos == 0) {

		insertfront(modelnum, tsize, tcolour);

	}
	else {

		cout << "======Invalid position======\n";

	}

}

void List::deleteid(int modelnum) {               //Search and delete node with given id

	trousernode* current = head;

	for (int i = 0; i < numitem; i++) {
		if (current->id == modelnum) {
			deletepos(i);
			break;
		}
		current = current->next;
	}

}

void List::deletepos(int pos) {            //Search and delete the value of given position

	if (pos > 0 && pos < numitem) {

		trousernode* current = head;
		for (int i = 0; i < (pos); i++) {
			current = current->next;
		}
		current->prev->next = current->next;
		current->next->prev = current->prev;

		delete current;
		numitem--;

	}
	else if (pos == 0) {

		trousernode* temp = head;
		head = head->next;
		head->prev = NULL;
		delete temp;
		numitem--;

	}
	else if (pos == numitem) {

		trousernode* temp = tail;
		tail = tail->prev;
		tail->next = NULL;
		delete temp;
		numitem--;

	}
	else {

		cout << "\n=========Invalid position=========\n";
	}

}


void List::printlist() {              //Print the full list

	if (numitem > 0) {

		trousernode* current = head;
		for (int i = 0; i < numitem; i++) {
			cout << current->id << "\t" << current->size << "\t\t" << current->color << '\n';
			current = current->next;
		}
		cout << '\n';
	}
	else {

		cout << "============== Trouser list is Empty ====================\n\n";

	}

}

List::~List()             //Destructor of the list
{
	trousernode* temp, * current = head;
	for (int i = 0; i < (numitem - 1); i++) {

		temp = current->next;
		delete current;
		current = temp;

	}
	delete current;
	numitem = 0;
	temp = NULL;

}
