#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

struct ListNode{
	int val;
	struct ListNode *next;
};


struct ListNode *createNode(int value)
{
	struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
	newNode->val = value;
	newNode->next = NULL;

	return(newNode);
}

struct ListNode *addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode *result = NULL;
	struct ListNode *current = NULL;

	int carry = 0;

	while (l1 != NULL || l2 != NULL)
	{
		int sum = carry;

		if (l1 != NULL)
		{
			sum += l1->val;
			l1 = l1->next;
		}

		if (l2 != NULL)
		{
			sum += l2->val;
			l2 = l2->next;
		}

		carry = sum / 10;
		sum = sum % 10;

		struct ListNode *newNode = createNode(sum);

		if (result == NULL)
		{
			result = newNode;
			current = result;
		}
		else
		{
			current->next = newNode;
			current = current->next;
		}
	}
	return(result);
}

void printList(struct ListNode *list)
{
	while (list != NULL)
	{
		printf("%d ", list->val);
		list = list->next;
	}
	printf("\n");
}

int main()
{
	struct ListNode *l1 = createNode(2);
	l1->next = createNode(4);
	l1->next->next = createNode(3);

	struct ListNode *l2 = createNode(5);
	l2->next = createNode(6);
	l2->next->next = createNode(4);

	struct ListNode *result = addTwoNumbers(l1,l2);

	printList(result);

	free(l1);
	free(l2);
	free(result);

	return(0);
}
