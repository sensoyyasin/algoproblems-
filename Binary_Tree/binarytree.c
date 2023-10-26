#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

void	printTree(struct node *root)
{
	if (root == NULL)
		return;

	//Left subtree printing
	printTree(root->left);

	//Node value printing
	printf("%d", root->data);

	//Right subtree printing
	printTree(root->right);
}


struct node *newNode(int data)
{
	//Allocate memory for new node
	struct node* node = (struct node*)malloc(sizeof(struct node));

	//Assign data to this node
	node->data = data;

	//Initialize left and right children as NULL
	node->left = NULL;
	node->right = NULL;
	return(node);
}

int main()
{
	struct node *root = newNode(1);
	/* 1
	  / \
	NULL NULL
	 */

	root->left = newNode(2);
	root->right = newNode(3);
	/*     1
	  /         \
	2            3
   / \          / \
  NULL NULL   NULL  NULL*/

  root->left->left = newNode(4);
	/*    1
	 /        \
	2               3
   /  \            / \
  4    NULL      NULL NULL
/   \
NULL NULL*/
	printf("Data from Tree: ");
	printTree(root);

	return(0);
}
