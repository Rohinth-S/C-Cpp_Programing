#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu *p = NULL;
int p_size = 0;

void edit();
void input();
void print();
void add();
void delete ();

struct stu
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    int ch = 0;
    input();

    while (1)
    {
        printf("\nop->1.Add New Entry.\nop->2.Print All Entry.\nop->3.Edit Entry.\nop->4.Delete Entry");

        printf("\n\nEnter The Choice->");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            add();
            break;
        case 2:
            print();
            break;
        case 3:
            edit();
            break;
        case 4:
            delete ();
            break;
        default:
            printf("You Enter Wrong Choice.!!");
        }
    }
    return 0;
}

void input()
{
    int i = 0;
    printf("enter the size of struct-");
    scanf("%d", &p_size);

    p = (struct stu *)malloc(p_size * sizeof(struct stu));
    memset(p, 0, p_size * sizeof(struct stu));

    for (i = 0; i < p_size; i++)
    {

        printf("enter the student roll number-");
        scanf("%d", &p[i].roll);

        fgetc(stdin);
        printf("enter the student name-");
        fgets(p[i].name, 20, stdin);

        printf("enter the student marks-");
        scanf("%f", &p[i].marks);
    }
}

//print all values in dynamic memory function

void print()
{

    printf("\nprinting the values-\n\n");
    for (int i = 0; i < p_size; i++)
    {
        printf("\nroll number of student is-%d\n", p[i].roll);
        printf("Name of student is-%s", p[i].name);
        printf("student marks is-%0.2f\n", p[i].marks);
    }
}
//adding student function.

void add()
{
    int t_size = 0;
    struct stu *temp = NULL;

    t_size = p_size + 1;

    temp = (struct stu *)malloc(t_size * sizeof(struct stu));
    memset(temp, 0, t_size * sizeof(struct stu));

    memcpy(temp, p, p_size * sizeof(struct stu));
    free(p);

    printf("enter the student roll number-");
    scanf("%d", &temp[t_size - 1].roll);

    fgetc(stdin);
    printf("enter the student name-");
    fgets(temp[t_size - 1].name, 20, stdin);

    printf("enter the student marks-");
    scanf("%f", &temp[t_size - 1].marks);

    p = temp;
    p_size = t_size;
}
void edit()
{
    int up = 0;
    float nmarks = 0;
    int i;
    int is_roll_found = 0;

    printf("enter the roll number you want to update the marks-");
    scanf("%d", &up);

    for (i = 0; i < p_size; i++)
    {
        if (up == p[i].roll)
        {
            is_roll_found = 1;
            printf("enter the new marks-");
            scanf("%f", &nmarks);

            p[i].marks = nmarks;
        }
    }
    if (is_roll_found == 0)
    {

        printf("\nRoll NUmber Not Found");
    }
}
void delete ()
{
    int idx = 0;
    int i = 0;
    struct stu *temp = NULL;
    int t_size = p_size - 1;

    printf("enter the roll number to remove entry-");
    scanf("%d", &idx);

    for (i = 0; i < p_size; i++)
    {
        if (idx == p[i].roll)
        {
            temp = (struct stu *)malloc(t_size * sizeof(struct stu));
            memset(temp, 0, t_size * sizeof(struct stu));

            memcpy(temp, p, (i) * sizeof(struct stu));
            memcpy(temp + i, (p + i + 1), (p_size - i - 1) * sizeof(struct stu));
            free(p);
            p = temp;
            p_size = t_size;
        }
    }
}