#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return(i);
}

char *ft_strdup(char *str)
{
	int i = 0;
	char *src = str;
	char *dest;

	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return(NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

typedef struct Node {
	char *choice;
	struct Node *beats;
	struct Node *loses_to;
} Node;

Node *createNode(char *choice)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->choice = ft_strdup(choice);
	newNode->beats = NULL;
	newNode->loses_to = NULL;

	return newNode;
}

void addRule(Node *winNode, Node *loseNode)
{
	winNode->beats = loseNode;
	loseNode->loses_to = winNode;
}

void determineWinner(Node *player1, Node *player2)
{
	if (player1->beats == player2)
		printf("Player 1 wins!\n");
	else if (player2->beats == player1)
		printf("Player 2 wins!\n");
	else
		printf("It's a tie\n");
}


int main()
{

	Node *rock = createNode("Rock");
	Node *paper = createNode("Paper");
	Node *scissors = createNode("Scissors");

	addRule(rock,scissors);
	addRule(paper,rock);
	addRule(scissors, paper);

	determineWinner(rock, paper);

    free(rock->choice);
    free(paper->choice);
    free(scissors->choice);
    free(rock);
    free(paper);
    free(scissors);

	return(0);
}
