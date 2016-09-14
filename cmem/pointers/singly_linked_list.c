#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void printList()
{
    struct node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insertFirst(int data)
{
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link->data = data;
    link->next = head;
    head = link;
}
int main()
{
    insertFirst(5);
    insertFirst(4);
    insertFirst(3);
    insertFirst(2);
    insertFirst(1);
    printList();
}
