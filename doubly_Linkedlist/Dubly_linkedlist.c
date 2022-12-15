#include<stdio.h>
#include<stdlib.h>
#include "doubly_LinkedList.h"


void main()
{
    int ch;
    do
    {
        printf("1:CREATE \t 2:DISPLAY \t 3:INSERTION_FIRST \t 4:INSERTION_MIDDLE \t 5:INSERTION_LAST \t 6:DELETE_FIRST \t 7:DELETE_MIDDLE \t 8:DELETE_LAST \t 9:SEARCH \t 10:REVERSE_ORDER \t 11:EXIT \n");

        printf("Enter choice  \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertion_first();
            break;
        case 4:
            insertion_middle();
            break;
        case 5:
            insertion_last();
            break;
        case 6:
            delete_first();
            break;
        case 7:
            delete_middle();
            break;
        case 8:
            delete_last();
            break;
        case 9:
            search();
            break;
        case 10:
            reverse();
            break;




        case 11: exit(0);
            break;

        default:
        printf("wrong choice \n");
            break;
        }
    } while (ch != 11);
}
