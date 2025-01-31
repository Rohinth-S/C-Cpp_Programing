#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// Renamed for clarity
int count_nodes(struct node *head) {
    int count = 0;
    struct node *ptr = head;
    
    while (ptr != NULL) {
        count++;
        ptr = ptr->link;
    }
    
    return count;  // Return count instead of printing
}

void print_data(struct node *head) {
    if (head == NULL) {
        printf("Linked list is empty!\n");
        return;
    }
    
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");  // Add newline for better formatting
}

struct node* add_at_end(struct node *head, int data) {
    struct node *temp = malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }
    
    temp->data = data;
    temp->link = NULL;
    
    if (head == NULL) {
        return temp;  // Handle empty list case
    }
    
    struct node *ptr = head;
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
    return head;
}

struct node* add_at_pos(struct node *head, int data, int pos) {
    if (pos < 1) {
        printf("Invalid position!\n");
        return head;
    }
    
    // Handle insertion at beginning
    if (pos == 1) {
        struct node *temp = malloc(sizeof(struct node));
        if (temp == NULL) {
            printf("Memory allocation failed!\n");
            return head;
        }
        temp->data = data;
        temp->link = head;
        return temp;
    }
    
    // Check if position exists in list
    if (head == NULL || pos > count_nodes(head) + 1) {
        printf("Position out of bounds!\n");
        return head;
    }
    
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }
    
    temp->data = data;
    temp->link = NULL;
    
    for (int i = 1; i < pos - 1; i++) {
        ptr = ptr->link;
    }
    
    temp->link = ptr->link;
    ptr->link = temp;
    return head;
}

int main() {
    struct node *head = NULL;
    
    // Add first node
    head = add_at_pos(head, 45, 1);
    
    // Add subsequent nodes
    head = add_at_pos(head, 98, 2);
    head = add_at_pos(head, 90, 2);
    head = add_at_end(head, 67);
    
    print_data(head);
    printf("Number of nodes: %d\n", count_nodes(head));
    
    // Free memory
    struct node *current = head;
    while (current != NULL) {
        struct node *temp = current;
        current = current->link;
        free(temp);
    }
    
    return 0;
}
