#include <stdio.h>
#include <stdlib.h>
#include "doubleList.h"
int main()
{
    createDoubleLinked() ;
    firstInsert(1) ;
    firstInsert(2) ;
    firstInsert(3) ;
    firstInsert(4) ;
    firstInsert(5) ;
    lastInsert(6) ;
    display() ;
    printf("\n ////////////////////////////////////////// \n") ;
    firstDelete();
    lastDelete() ;
    display() ;
    printf("\n ////////////////////////////////////////// \n") ;
    randomInsert(7,2) ;
    display() ;
    printf("\n ////////////////////////////////////////// \n") ;
    randomDelete(2) ;
    display() ;
    return 0;
}
