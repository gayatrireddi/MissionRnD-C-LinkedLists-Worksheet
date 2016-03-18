/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	int i;
	node *p, *head = NULL;
	if (N < 0)
	{
		N = -N;
	}
	do
	{
		i = N % 10;
		p = (node*)malloc(sizeof(node));
		p->num = i;
		p->next = head;
		head = p;
		N = N / 10;
	} while (N > 0);
	return head;
}