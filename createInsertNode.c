#include <stdlib.h>
#include"header.h"

struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** currentHead, int data)
{
    struct Node* newNode = createNode(data);
    newNode->next = *currentHead;
    *currentHead = newNode;
}

