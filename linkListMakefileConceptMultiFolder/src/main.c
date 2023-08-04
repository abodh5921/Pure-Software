#include <stdio.h>
#include"/home/abodh/PureSoftware/PS_Abodh/linkList/linkListMakefileConceptMultiFolder/header/header.h"
int main()
{
    struct Node* listHead = NULL;
    insertAtBeginning(&listHead, 1);
    insertAtBeginning(&listHead, 2);
    insertAtBeginning(&listHead, 3);

    display(listHead);
    deleteGivenKey(&listHead, 3);
    display(listHead);

    return 0;
}

