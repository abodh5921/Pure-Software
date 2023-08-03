#include <stdio.h>
#include <stdlib.h>
#include"header.h"

void deleteGivenKey(struct Node** currentHead, int key)
{
    struct Node* temp = *currentHead;
    struct Node* prev = NULL;

    if (temp != NULL && key == temp->data)
    {
        *currentHead = temp->next;
        free(temp);
    }
    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL)
        {
            printf("Key not found. Returning...\n");
            return;
        }
        prev->next = temp->next;
        free(temp);
    }
}
