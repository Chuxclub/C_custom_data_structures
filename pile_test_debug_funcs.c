#include "pile_test_debug_funcs.h"

void pileTester()
{
    printf("Pile tester: \n");
    T_pile_head myPile = createEmptyP();

    if(IsPEmpty(myPile))
        printf("\tEmpty pile successfully created\n");

    else
        printf("\tSomething went wrong with empty pile creation or emptiness testing\n");


    for(int i = 0; i < 10; i++)
    {
        addP(&myPile, i);

        if(!(IsPEmpty(myPile)))
            printf("\tNew cells added successfully to pile with first value %i\n", myPile->value);

        else
            printf("\tSomething failed with cells creation and/or adding\n");
    }


    for(int i = 0; i < 9; i++)
    {
        remP(&myPile);

        if(IsPEmpty(myPile))
            printf("\tCells removal are a success\n");

        else
            printf("\tRemoval is not complete, first value is now %i\n", myPile->value);
    }


    remP(&myPile);

    if(IsPEmpty(myPile))
        printf("\tCells removal are a success\n");

    else
        printf("\tSomething went wrong with cell removal\n");


    return 0;
}
