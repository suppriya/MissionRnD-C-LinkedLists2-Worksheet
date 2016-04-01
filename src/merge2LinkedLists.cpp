/*
OVERVIEW: Merge two sorted linked lists.
E.g.: 1->3->5 and 2->4, output is 1->2->3->4->5.

INPUTS: Two sorted linked lists.

OUTPUT: Return merged sorted linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};
struct node* Sorting(struct node* , struct node* );
struct node * merge2LinkedLists(struct node *head1, struct node *head2) {
	struct node* temp1 = head1;
	struct node* temp2 = head2;
	if ((temp1 == NULL) && (temp2 != NULL))
	{
		return head2;
	}
    else if ((temp1 != NULL) && (temp2 == NULL))
	{
		return head1;
	}                                                                 
	else if ((temp1 != NULL) && (temp2!=NULL))
	{
		
		Sorting(temp1, temp2);
	
	}
	else return NULL;
   }

 struct node* Sorting(struct node* temp1, struct node* temp2)
{
	struct node* ans = NULL;
     if (temp1 == NULL)
		return(temp2);
	else if (temp2 == NULL)
		return(temp1);
	 if (temp1->num <= temp2->num)
	{
		ans = temp1;
		ans->next = Sorting(temp1->next, temp2);
	}
	else
	{
		ans = temp2;
		ans->next = Sorting(temp1, temp2->next);
	}
	return ans;
}

