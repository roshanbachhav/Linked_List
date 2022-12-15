#include <stdio.h>
#include <stdlib.h>
#include "single_LL.h"

void main()
{
    int ch;
    do
    {
        printf("1:CREATE \t 2:DISPLAY \t 3:INSERTION \t 4:DELETE \t 5:SEARCH \t 6:REVERSE \t 7:EXIT \n");

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
            insert();
            break;
        case 4:
            delete();
            break;
        case 5:
            search();
            break;
        case 6:
            reverse();
            break;
        default:
        printf("wrong choice \n");
            break;
        }
    } while (ch != 7);
}
