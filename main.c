/**
 * CPE-TP4 : Implémentation d'une liste dans une liste chaînée
 *
 * @file main.c
 * @brief      Implement a mere chained list
 * @author     Nathanaël SPRIET
 * @date       14/02/2017
 */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main()
{
	List* myList = malloc(sizeof(List));
	myList->value = 1;
	myList->next = NULL;
	printList(myList);
	return 0;
}
