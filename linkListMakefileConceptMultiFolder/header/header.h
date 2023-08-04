struct Node
{
    int data;
    struct Node* next;
};

struct Node* createNode(int data);
void insertAtBeginning(struct Node** currentHead, int data);
void display(struct Node* givenHead);
void deleteGivenKey(struct Node** currentHead, int key);
