#include <stdio.h>
#include"header.h"
int main()
{
    struct Node* listHead = NULL;
    insertAtBeginning(&listHead, 1);
    insertAtBeginning(&listHead, 2);
    insertAtBeginning(&listHead, 3);
    insertAtBeginning(&listHead, 4);
    display(listHead);
    deleteGivenKey(&listHead, 3);
    display(listHead);

    return 0;
}

