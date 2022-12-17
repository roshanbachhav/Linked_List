#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *nw, *head = NULL, *temp, *ptr, *last;

void create()
{
    int i, n;
    printf("Enter size of node \n");
    scanf("%d", &n);
    printf("Enter element  in node \n");
    for (i = 0; i < n; i++)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &nw->data);
        nw->next = NULL;
        if (head == NULL)
        {
            head = ptr = nw;
            ptr->next = head;
        }
        else
        {
            ptr->next = nw;
            ptr = ptr->next;
            ptr->next = head;
        }
    }
}

void display()
{
    ptr = head;
    printf("Printed element \n");
    while (ptr->next != head)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
}

void insert()
{
    int pos, count = 1;
    ptr = head;
    last = head;
    while (last->next != head)
    {
        last = last->next;
    }
    printf("Enter position \n");
    scanf("%d", &pos);
    printf("Enter element in node \t :: ");
    nw = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &nw->data);
    if (pos == 1)
    {
        nw->next = head;
        head = nw;
        last->next = head;
    }
    else
    {
        while (count != pos - 1)
        {
            ptr = ptr->next;
            count++;
        }
        nw->next = ptr->next;
        ptr->next = nw;
    }
}

void delete(){
    int pos , count=1;
    ptr = head;
    last = head;
    while (last->next != head)
    {
        last = last->next;
    }
    printf("Enter position delete element \n");
    scanf("%d",&pos);
    if (pos == 1)
    {
        temp = head;
        head = head -> next;
        free(temp);
        last -> next = head;
    }
    else
    {
        while (count != pos-1)
        {
            ptr = ptr -> next;
            count++;
        }
        temp = ptr -> next;
        ptr -> next = temp -> next;
        temp -> next = ptr;
        free(temp);
        last -> next = head;
    }
    
}

void search(){
    int ele,flag=0;
    ptr = head;
    printf("Enter element can you search \n");
    scanf("%d",&ele);
    while (ptr != NULL)
    {
        if (ptr -> data == ele)
        {
            flag = 1;
            break;
        }
        else
        {
            ptr = ptr -> next;
        }
    }
        if (flag == 1)
        {
            printf("Given element is :: [%d] are present in node",ptr -> data);
        }
        else
        {
            printf("Element are not present in node \n");
        }
    
    
}