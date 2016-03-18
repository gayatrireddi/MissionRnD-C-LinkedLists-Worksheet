/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.


NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	int x;
	node *l1, *l2, *p;
	p = head;
	if (head==NULL || sortLinkedList==NULL)
	{
		return NULL;
	}

	if (head->next == NULL){ return head;}
	while (p != NULL){
		l1 = head; l2 = head->next;
		do{
			if (l1->num>l2->num)
			{
				x = l1->num;
				l1->num = l2->num;
				l2->num = x;
			}
			l2 = l2->next;
			l1 = l1->next;
		} while (l2 != NULL);
		p = p->next;
	}return head;
}