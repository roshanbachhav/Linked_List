#include<stdio.h>
#include<stdio.h>

struct node{
    int data;
    struct node *next,*prev;
};

struct node *head=NULL,*ptr,*temp,*nw;

void create(){
    int i,n;
    printf("Enter element for node size \n");
    scanf("%d",&n);
    printf("Enter data in node \n");
    for ( i = 0; i < n; i++)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&nw->data);
        nw -> next = NULL;
        nw -> prev = NULL;
        if (head == NULL)
        {
            head = ptr = nw;
        }
        else
        {
            ptr -> next = nw;
            nw -> prev = ptr;
            ptr = ptr -> next;
        }
        
    }
    
}

void display(){
    ptr = head;
    printf("Printing element \t -> \t");
    while(ptr != NULL)
    {
        printf("%d\t",ptr -> data);
        ptr = ptr -> next;
    }
    printf("\n");

}

void insertion_first(){
    int pos,cnt = 1;
    printf("Enter element in first position \n");
    nw = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&nw -> data);
    nw -> next = NULL;
    nw -> prev = NULL;
    nw -> next = head;
    head -> prev = nw;
    head = nw;
}




void insertion_middle(){
    int pos,cnt=1;
    ptr = head;
    printf("Enter any middle Position \n");
    scanf("%d",&pos);
    printf("Enter data in node \n");
    nw = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&nw->data);
    nw -> next = NULL;
    nw -> prev = NULL;    
    while(cnt!=pos-1)
    {
        ptr = ptr -> next;
        cnt++;
    }
    nw -> next = ptr -> next;
    ptr -> next -> prev = nw;
    ptr -> next = nw;
    nw -> prev = ptr;
}

void insertion_last(){
    ptr = head;
    printf("Enter element in last postion \n");
    nw = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&nw -> data);
    nw -> next = NULL;
    nw -> prev = NULL;
    while(ptr -> next != NULL)
    {
        ptr = ptr -> next;
    }
    ptr -> next = nw;
    nw -> prev = ptr;
}

void delete_first(){
    ptr = head;
    printf("Deleting the first element \n");
    temp = head;
    head = head -> next;
    head -> prev = NULL;
    free(temp);
}

void delete_middle(){
    int pos , cnt = 1;
    ptr = head;
    printf("Any middle position can choose \n");
    scanf("%d",&pos);
    while (cnt != pos-1)
    {
        ptr = ptr -> next;
        cnt++;
    }
    temp = ptr -> next;
    ptr -> next = temp -> next;
    temp -> next -> prev = ptr;
    free(temp);
}

void delete_last(){
    ptr = head;
    printf("Deleted Last element \n");
    while(ptr -> next != NULL)
    {
        ptr = ptr -> next;
    }
    temp = ptr;
    ptr-> prev -> next = NULL;
    free(temp);
}

void search(){
    ptr = head;
    int flag = 0,element;
    printf("Enter position you can search \n");
    scanf("%d",&element);
    while (ptr != NULL)
    {
        if (ptr -> data == element)
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
        printf("Given element is { %d } are present in linked list \n",ptr ->data);
    }
    else
    {
        printf("Giver element are not exist \n");
    }
}

void reverse(){
    ptr = head;
    while (ptr -> next != NULL)
    {
        ptr = ptr -> next;
    }
    printf("Reversed elements \t -> \t");
    while (ptr != NULL)
    {
        printf("%d\t",ptr -> data);
        ptr = ptr -> prev;
    }
    printf("\n");
    
}