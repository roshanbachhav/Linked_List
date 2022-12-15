#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *ptr,*nw,*temp,*head = NULL;

void create(){
    int i,n;
    printf("Enter element \n");
    scanf("%d",&n);
    printf("Enter element in node \n");
    for ( i = 0; i < n; i++)
    {
        nw = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&nw->data);
        nw -> next = NULL;
    
        if (head == NULL)
        {
            head = ptr = nw;
        }
        else
        {
            ptr -> next = nw;
            ptr = ptr -> next;
        }
    }
}

void display(){
    ptr = head;
    printf("Printed element are following \n");
    while(ptr!=NULL)
    {
        printf("\t %d \t",ptr->data);
        ptr = ptr -> next;
    }
    printf("\n");
}

void insert(){
    ptr = head;
    int pos,cnt=1;
    printf("Enter position can you add \n");
    scanf("%d",&pos);
    printf("Enter element in node \n");
    nw = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&nw->data);
    nw -> next = NULL;
    if(pos == 1){
        nw -> next = head;
        head = nw;
    }
    else
    {
        while (cnt!=pos-1)
        {
            ptr = ptr -> next;
            cnt++;
        }
        ptr -> next = nw -> next;
        ptr -> next = nw;
    }
}

void delete(){
    ptr = head;
    int pos,cnt=1;
    printf("Enter position you can delete \n");
    scanf("%d",&pos);
    if(pos == 1)
    {
        temp = head;
        head = head-> next;
        free(temp);
    }
    else
    {
        while (cnt != pos-1)
        {
            ptr = ptr -> next;
            cnt++;
        }
            temp = ptr -> next;
            ptr -> next = temp -> next;
            free(temp);
    }
}
void search(){
    int ele,flag=0;
    ptr = head;
    printf("Enter element you wanna search \n");
    scanf("%d",&ele);
    while (ptr!=NULL)
    {
        
    
        if(ptr -> data == ele)
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
        printf("Given element is %d are present \n",ptr -> data);
    }
    else
    {
        printf("Given element are not present \n");
    }
}

void reverse()
{
struct node *p,*q,*r;
    p=q=r=head;
    p=p->next->next;
    q=q->next;
    r->next=NULL;
    q->next=r;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
    printf("\nLink list element are in reverse order :\n");
    display();
}
