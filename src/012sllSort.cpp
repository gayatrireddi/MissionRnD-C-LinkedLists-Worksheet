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
	struct node *n, *p,*t;
	int i;
	n = head; p = head;
	while (p != NULL)
	{
		n = head;
		t = head->next;
		while (t != NULL){
			
			if (n->data > t->data)
			{
				i = n->data;
				n->data =t->data;
				t->data = i;
			}
			n = n->next;
			t = t->next;
		}
		p = p->next;
	}
}