
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    typedef struct sObject
    {
        int x;
        int y;
        char name[10];
        struct sObject *next;
    } tObject;
    tObject *get_struct(void)
        {
            tObject *p = (tObject *) malloc(sizeof(tObject));
            printf("Name of element: ");
            gets(p -> name);
            printf ("\n\n");
            srand(time(NULL) );
            p -> x = rand() % 100;
            p -> y = rand() % 100;
if(!p)
            {
                printf("Error\n");
                exit(0);
            };
            return p;
        };




    tObject *pi = NULL;
    tObject *p_begin = NULL;
    tObject *p = NULL;
    tObject *prev_p = NULL;
    char c;

    do
    {
        printf(" 1- Create first element\n");
        printf(" 2- Add element at the end of list\n");
        printf(" 3- Delete last element\n");
        printf(" 4- Show list\n");
        printf(" 5- Delete list\n");
        printf(" 6- Search for element\n");
        printf(" 7- Quit\n");
        printf(" What to do? (1-7): ");
        c = getch();
        printf ("\n\n");

        switch(c)
        {
            case '1':
                {
                    if(p_begin == NULL)
                    {
                        p_begin = get_struct();
                        p_begin -> next = NULL;
                        p = p_begin;
                        prev_p = p_begin;
                    }
                    else printf("First element exists\n\n");
                }break;
            case '2':
                {
                    if(p_begin)
                    {
                        p -> next = get_struct();
                        prev_p = p;
                        p = p -> next;
                        p -> next = NULL;
                    }
                    else printf("No elements yet.\n\n");
                }break;
            case '3':
                {
                    if(prev_p)
                        if(prev_p -> next)
                        {
                            free(p);
                            prev_p -> next = NULL;
                            for(p = p_begin; (p -> next != prev_p) & (p -> next != NULL); p = p -> next);
                            prev_p = p;
                            if(prev_p -> next)
                                p = prev_p -> next;
                        }
                        else printf("You can't delete 1st element.\n\n");
                    else printf("No elements yet.\n\n");
                }break;
            case '4':
                {
                    int i;
                    if(p_begin)
                    for(i = 1, pi = p_begin; pi; pi = pi -> next, i++)
                        {
                            printf("%d)", i);
                            printf("  Name: %s\n", pi -> name);
                            printf("    x: %d\n", pi -> x);
                            printf("    y: %d\n", pi -> y);
                        }
                    else printf("No elements yet.\n\n");
                }break;
            case '5':
                {
                    if(p_begin)
                    {
                        int i = -1;
                        for(pi = p_begin; pi; pi = pi -> next)
                            i++;
                        for(;i > 0; i--)
                        {
                            if(prev_p)
                                if(prev_p -> next)
                                {
                                    free(p);
                                    prev_p -> next = NULL;
                                    for(p = p_begin; (p -> next != prev_p) & (p -> next != NULL); p = p -> next);
                                    prev_p = p;
                                    if(prev_p -> next)
                                    p = prev_p -> next;
                                }
                                else printf("You can't delete first element.\n\n");
                            else printf("No elements yet.\n\n");
                        }
                        free(p);
                        p_begin = NULL;
                        prev_p = NULL;
                        p = NULL;
                        printf("deleted\n\n");
                    }
                    else printf("No elements yet.\n\n");
                }break;
            case '6':
                {
                    if(p_begin)
                        {
                            printf("    What attribute?:\n");
                            printf(" 1- x\n");
                            printf(" 2- y\n");
                            c = getch();
                            printf ("\n\n");
                            printf("   Enter value: ");
                            switch(c)
                            {
                                case '1':
                                    {
                                        int i, h, n;
                                        n = scanf("%d", &h);
                                        if(n != 1) return 0;
                                        n = 0;
                                        printf ("\n\n");
                                        printf("Found:\n");
                                        for(i = 1, pi = p_begin; pi; pi = pi -> next, i++)
                                            {
                                                if(pi -> x == h)
                                                    {
                                                        printf("%d)\n", i);
                                                        printf("  Name: %s\n\n", pi -> name);
                                                        printf("    x: %d\n", pi -> x);
                                                        printf("\n");
                                                        n = 1;
                                                    }
                                            }
                                        if(!n) printf("     Nothing.\n");
                                    }break;
                                case '2':
                                    {
                                        int i, h, n;
                                        n = scanf("%d", &h);
                                        if(n != 1) return 0;
                                        n = 0;
                                        printf ("\n\n");
                                        printf("Found:\n");
                                        for(i = 1, pi = p_begin; pi; pi = pi -> next, i++)
                                            {
                                                if(pi -> y == h)
                                                    {
                                                        printf("%d)", i);
                                                        printf("  Name: %s\n\n", pi -> name);
                                                        printf("    y: %d\n", pi -> y);
                                                        printf("\n");
                                                        n = 1;
                                                    }
                                            }
                                        if(!n) printf("     Nothing.\n");
                                    }break;
                                    default: printf("Incorrect command\n\n");
                            }
                        }
                    else printf("No elements yet.\n\n");
                    printf("\n\n");
                }break;
            case '7': break;
            default: printf("Incorrect command\n\n");
        }
    } while(c != '7');
    return 0;
}
