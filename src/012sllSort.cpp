/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	struct node *n=head;
	int c[3];
	int i;
	for (i = 0; i < 3; i++)
		c[i] = 0;
	while (n != NULL)
	{
		c[n->data] += 1;
		n = n->next;

	}
	i = 0;
	n = head;
	while (n != NULL)
	{
		if (c[i] == 0)
			i++;
		else
		{
			n->data = i;
			n = n->next;
			i--;
		}
	}
	
}