#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct student *head = NULL;
struct student
{
    int rollno;
    char name[100];
    float marks;
    struct student *next;
};

void add_student()
{
    struct student *P = NULL;
    P = (struct student *)malloc(sizeof(struct student));

    printf("Enter the student roll number : ");
    scanf("%d", &P->rollno);

    fgetc(stdin);
    printf("Enter the student name : ");
    fgets(P->name, 100, stdin);

    printf("Enter the student marks : ");
    scanf("%f", &P->marks);

    P->next = NULL;

    if (head == NULL)
    {
        head = P;
    }
    else
    {
        struct student *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = P;
    }
}

void print_details()
{
    if (head == NULL)
    {
        printf("No Value Found..!!");
    }
    else
    {
        struct student *temp = head;
        while (temp != NULL)
        {
            printf("Student Roll Number Is : %d\n", temp->rollno);
            printf("Student Name Is : %s", temp->name);
            printf("Student Marks Is : %0.2f\n", temp->marks);
            temp = temp->next;
        }
    }
}

void delete_details()
{
    struct student *P = head;
    printf("Enter roll number to delete : ");
    scanf("%d", &P->rollno);
    struct student *temp1 = head;
    struct student *temp2 = head;
    while (temp1 != NULL)
    {

        if (temp1->rollno == P->rollno)
        {

            printf("Record with roll number %d Found !!!\n", P->rollno);

            if (temp1 == temp2)
            {
                head = head->next;
                free(temp1);
            }
            else
            {
                temp2->next = temp1->next;
                free(temp1);
            }

            printf("Record Successfully Deleted !!!\n");
            return;
        }
        temp2 = temp1;
        temp1 = temp1->next;
    }
    printf("Student with roll number %d is not found !!!\n", P->rollno);
}

int main()
{
    int ch;

    while (1)
    {
        printf("\n1.Add new student details.\n2.search student details.\n3.delete student details.\n4.print student details.\n5.exit.\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            add_student();
            break;

            // case 2:
            //     search_details();
            //     break;

        case 3:
            delete_details();
            break;

        case 4:
            print_details();
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("invalid position....!!");
            break;
        }
    }

    return 0;
}
