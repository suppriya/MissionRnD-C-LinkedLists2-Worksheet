/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	if (head != NULL)
	{
		struct node* temp;
		temp = head;
		int count = 0;
		for (temp = head; temp != NULL; temp = temp->next)
		{
			count++;
		}
		temp = head;
		if (count % 2 != 0)
		{
			int i;
			for (i = 0; i < (count / 2); i++)
			{
				temp = temp->next;
			}
			return temp->num;
		}
		else
		{
			int i, ans;
			for (i = 0; i < ((count - 1) / 2); i++)
			{
				temp = temp->next;
			}
			ans = temp->num;
			temp = temp->next;
			ans = ((ans + temp->num) / 2);
			return ans;
		}
	}
	return -1;
}
