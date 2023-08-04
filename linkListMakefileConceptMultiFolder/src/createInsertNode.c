#include <stdlib.h>
#include"/home/abodh/PureSoftware/PS_Abodh/linkList/linkListMakefileConceptMultiFolder/header/header.h"
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

