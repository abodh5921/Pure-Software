#include <stdio.h>
#include"/home/abodh/PureSoftware/PS_Abodh/linkList/linkListMakefileConceptMultiFolder/header/header.h"

void display(struct Node* givenHead)
{
    struct Node* temp = givenHead;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
        printf("hello world");
    }
    printf("NULL\n");
}
