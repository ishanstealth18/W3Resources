#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int info;
	struct Node* link;
}*start;

void traverseList(struct Node* n)
{
	while(n  != NULL)
	{
		printf("\n%d",n->info);
		n = n->link;
	}
}

void createList(int n)
{
	struct Node *temp, *newNode;
	int data = 0;
	start = (struct Node *) malloc( sizeof(struct Node) );

	if(start == NULL)
	{
		printf("\nNo memory allocated.");
	}
	printf("\nEnter data for node 1: ");
	printf("\nValue of node 1: ");
	scanf("%d",&data);

	start->link = NULL;
	start->info = data;

	temp = start;
	for(int i = 2; i<=n; i++)
	{

		newNode = (struct Node *) malloc( sizeof(struct Node) );

		 if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

		printf("\nValue of node %d: ",i);
		scanf("%d",&data);
		newNode->info = data;
		newNode->link = NULL;

		temp->link = newNode;
		temp = temp->link;
	}

}

void searchNumMethod(int num, struct Node *startNode)
{
	int searchFlag = 0;
	while(startNode != NULL)
	{
		if(startNode->info == num)
		{
			searchFlag = 1;
			printf("\n%d is present in the list.",num);
			break;
		}
		//printf("\n%d",startNode->info);
		startNode = startNode->link;
	}
	if(searchFlag == 0)
	{
		printf("%d is not present in the list.",num);
	}
}


int main() {


	int numOfNodes = 0;
	int searchNum = 0;
	printf("Enter number of nodes: ");
	scanf("%d",&numOfNodes);
	createList(numOfNodes);
	traverseList(start);

	printf("\nNumber to be searched: ");
	scanf("%d",&searchNum);
	searchNumMethod(searchNum,start);

}
