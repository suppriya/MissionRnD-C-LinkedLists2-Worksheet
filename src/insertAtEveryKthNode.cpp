/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K) {
	if (K > 0)
	{
		struct node* temp;
		temp = head;
		int count = 0;
		for (temp = head; temp != NULL; temp = temp->next)
		{
			count++;
		}
		if (K > count)
		{
			return head;
		}
		else
		{
			
			struct node* pre=head;
			pre = head;
			
			int c = 0;
			for (temp = head; temp != NULL; temp = temp->next)
			{
				c++;
				//insertAtEveryKthNode(createList(12345), 2), 1223425
				if (c==K)
				{
					struct node* temp1 = (struct node*)malloc(sizeof(struct node));
					temp1->num = K;
					temp1->next = temp->next;
					temp->next = temp1;
					c = -1;
				}
				
			}
			return head;
		}
		
	}
	return NULL;
}
