/**
 * CPE-TP4 : Implémentation d'une liste dans une liste chaînée
 *
 * @file list.c
 * @brief      Useful tools to manage chained list
 * @author     Nathanaël SPRIET
 * @date       14/02/2017
 */
#include "list.h"

/*
***************************** Functions *************************
*/

void printList(List* list)
{
	printf("%d",list->value);
	if(list->next != NULL)
	{
		printf("->");
		printList(list->next);
	}
	else
	{
		printf("\n");
	}
}

List* addAtEnd(List* list, int value)
{
	List* lastElement = findTheEndOfList(list);
	lastElement->next = createElement(value);
	return(list);
}

/*
***************************** Static Functions *************************
*/

List* findTheEndOfList(List* list)
{
	if(list->next != NULL)
	{
		findTheEndOfList(list->next);
	}
	else
	{
		return(list);
	}
}

List* createElement(int value)
{
	List* newElement = malloc(sizeof(List));
	newElement->value = value;
	newElement->next = NULL;
	return(newElement);
}
