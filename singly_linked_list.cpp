#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
struct node
{
    int value;
    struct node *next;
};

void insert();
void display();
void delete_node();
int count();

typedef struct node DATA_NODE;

DATA_NODE *head_node, *first_node, *temp_node = 0, *prev_node, next_node;
int data;

int main()
{
    int option = 0;
    cout << "singly linked list c++ example - All operations\n";

    while (option < 5)
    {
        cout << "\noptions\n";
        cout << "1 : insert into linked list \n";
        cout << "2 : delete from linked list \n";
        cout << "3 : display linked list\n";
        cout << "4 : count linked list\n";
        cout << "others : Exit()\n";
        cout << "Enter your option : ";
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            insert();
            break;
        case 2:
            delete_node();
            break;
        case 3:
            display();
            break;
        case 4:
            count();
            break;

        default:
            break;
        }
    }

    return 0;
}

void insert()
{
    cout << "\n Enter element for insert linked list : \n ";
    scanf("%d", &data);

    temp_node = (DATA_NODE *)malloc(sizeof(DATA_NODE));
    temp_node->value = data;

    if (first_node == 0)
    {
        first_node = temp_node;
    }
    else
    {
        head_node->next = temp_node;
    }
    temp_node->next = 0;
    head_node = temp_node;
    fflush(stdin);
}

void delete_node()
{
    int countvalue, pos, i = 0;
    countvalue = count();
    temp_node = first_node;
    cout << "\n Enter position for delete element : \n";
    scanf("%d", &pos);

    if (pos > 0 && pos <= countvalue)
    {
        if (pos == 1)
        {
            temp_node = temp_node->next;
            first_node = temp_node;
            cout << "\n deleted successfully \n\n ";
        }
        else
        {
            while (temp_node != 0)
            {
                if (i == (pos - 1))
                {
                    prev_node->next = temp_node->next;
                    if (i == (countvalue - 1))
                    {
                        head_node = prev_node;
                    }
                    cout << "\n delete successfully \n\n";
                    break;
                }
                else
                {
                    i++;
                    prev_node = temp_node;
                    temp_node = temp_node->next;
                }
            }
        }
    }
    else
        cout << "\n invalid position \n\n";
}

void display()
{
    int count = 0;
    temp_node = first_node;
    cout << "\ndispiay linked list : \n";
    while (temp_node != 0)
    {
        cout << "# " << temp_node->value;
        count++;
        temp_node = temp_node->next;
    }
    cout << "\n no of items in linked list : %d \n"
         << count;
}

int count()
{
    int count = 0;
    temp_node = first_node;
    while (temp_node != 0)
    {
        count++;
        temp_node = temp_node->next;
    }
    cout << "\n no of item in linked list : %d" << count;
    return count;
}