#include <stdio.h>
#include <stdlib.h>
#include "piles.h"
#include "pile_test_debug_funcs.h"


int main()
{
    //pileTester();
    T_pile_head myPile = NULL;
    myPile = addP(myPile, 3);
    myPile = addP(myPile, 9);
    myPile = addP(myPile, 1);
    myPile = addP(myPile, 6);
    myPile = addP(myPile, 2);

    printP(myPile);
    printf("\n\nLength of pile: %i\n", lenP(myPile));
}


/* ARCHIVE, MY OWN ATTEMPT WITHOUT HELP:

typedef struct T_cell
{
    int value;
    struct T_cell *previous_cell;
} T_cell;

typedef struct
{
    T_cell *first_cell;
} T_pile_head;

T_pile_head *createEmptyP()
{
    T_pile_head *my_empty_pile = (T_pile_head *) malloc(sizeof(T_pile_head));
    my_empty_pile->first_cell = NULL;

    return my_empty_pile;
}

int IsPEmpty(T_pile_head *myPile)
{
    if(myPile->first_cell == NULL)
        return 1;

    else
        return 0;
}

T_cell *createPCell(int user_value)
{
    T_cell *res_cell = (T_cell *) malloc(sizeof(T_cell));
    res_cell->value = user_value;
    res_cell->previous_cell = NULL;

    return res_cell;
}

void addP(T_pile_head *myPile, T_cell *new_cell)
{
    T_cell *previous_head = myPile->first_cell;

    new_cell->previous_cell = previous_head;
    myPile->first_cell = new_cell;
}

void remP(T_pile_head *myPile)
{
    if(myPile->first_cell == NULL)
        printf("Can't remove cell as pile is empty...");

    else
    {
        T_cell *previous_first_cell = myPile->first_cell;
        myPile->first_cell = myPile->first_cell->previous_cell;
        free(previous_first_cell);
    }

}
*/
