#include <stdio.h>
#include "inp.h"

int *foo(){
    extern int a, b, c;
    extern char a1, b1, c1;
    int checked[3];
    if (a1 != a){
        checked[0] = (int) NULL;
    }
    if (b1 != b){
        checked[1] = (int) NULL;
    }
    if (c1 != c){
        checked[2] = (int) NULL;
    }
    return checked;
}
#ifndef PROJEKT_01_ASCIICHECK_H
#define PROJEKT_01_ASCIICHECK_H

#endif //PROJEKT_01_ASCIICHECK_H
