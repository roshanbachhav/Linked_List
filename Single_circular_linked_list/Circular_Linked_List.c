#include<stdio.h>
#include<stdlib.h>
#include "circular_Linked_list.h"

void main()
{
    int ch;
    do
    {
        printf("\nPlease select correct operation in the following\n");
        printf("\n1:create \t 2:display \t 3: insert \t 4: delete \t 5: search \t 6: Exit");

        printf("\n please select correct choice \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:insert();
            break;
        case 4:delete();
            break;
        case 5:search();
            break;
        case 6:
            exit(0);
            break;

        default:
            printf("Inavlid input \n");
            break;
        }
    } while (ch != 6);
}