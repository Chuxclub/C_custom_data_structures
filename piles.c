#include "piles.h"

/*==========================================*/
/*========== FONCTIONS PRIMITIVES ==========*/
/*==========================================*/

T_pile_head createEmptyP()
{
    T_pile_head my_empty_pile = NULL;
    return my_empty_pile;
}

int IsPEmpty(T_pile_head myPile)
{
    return myPile == NULL;
}

T_cell *createPCell(int user_value)
{
    T_cell *res_cell = (T_cell *) malloc(sizeof(T_cell));
    res_cell->value = user_value;
    res_cell->previous_cell = NULL;

    return res_cell;
}

T_pile_head addP(T_pile_head myPile, int new_cell_value)
{
    T_cell *previous_head = myPile;

    T_cell *new_cell = createPCell(new_cell_value);
    new_cell->previous_cell = previous_head;

    T_pile_head new_pile_head = new_cell;

    return new_pile_head;
}


T_pile_head remP(T_pile_head myPile)
{
    if(IsPEmpty(myPile))
    {
        printf("Can't remove cell as pile is empty...\n");
        return NULL;
    }


    else
    {
        T_pile_head new_pile_head = myPile->previous_cell;
        return new_pile_head;
    }
}


/*==========================================*/
/*============ FONCTIONS UTILES ============*/
/*==========================================*/

int lenP_aux(T_pile_head myPile, int accumulator)
{
    if(IsPEmpty(myPile))
        return accumulator;

    else
    {
        accumulator++;
        lenP_aux(remP(myPile), accumulator);
    }
}

int lenP(T_pile_head myPile)
{
    if(IsPEmpty(myPile))
        printf("\n\n /!\\ Error in lenP() in piles.c module: pile is empty /!\\ \n\n");

    else
    {
        return lenP_aux(myPile, 0);
    }
}


void printP(T_pile_head myPile)
{
    if(IsPEmpty(myPile))
        printf("|");


    else
    {
        printf("| %i ", myPile->value);
        printP(remP(myPile));
    }
}
