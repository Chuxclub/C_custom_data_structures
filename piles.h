#ifndef PILES_H_INCLUDED
#define PILES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

/*=============================================*/
/*============ STRUCTURE DES PILES ============*/
/*=============================================*/

typedef struct T_cell
{
    int value;
    struct T_cell *previous_cell;
} T_cell;

typedef T_cell *T_pile_head;


/*==========================================*/
/*========== FONCTIONS PRIMITIVES ==========*/
/*==========================================*/

T_pile_head createEmptyP();
int IsPEmpty(T_pile_head myPile);
T_cell *createPCell(int user_value);
T_pile_head addP(T_pile_head myPile, int new_cell_value);
T_pile_head remP(T_pile_head myPile);


/*==========================================*/
/*============ FONCTIONS UTILES ============*/
/*==========================================*/

int lenP_aux(T_pile_head myPile, int accumulator);
int lenP(T_pile_head myPile);
void printP(T_pile_head myPile);


#endif // PILES_H_INCLUDED
