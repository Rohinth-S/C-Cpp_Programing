#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void count_of_nood(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("Linked list is empty !..");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("%d", count);
}

void print_data(struct node *head)
{
    if (head == NULL)
    {
        printf("linked list is empty !..");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;

    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

void add_at_pos(struct node *head, int data, int pos)
{
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;
    pos--;
    while (pos != 1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr2->link = ptr->link;
    ptr->link = ptr2;
}

int main()
{

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    add_at_pos(head, 90, 2);
    add_at_end(head, 67);
    print_data(head);
    printf("\n");
    count_of_nood(head);
    return 0;
}
