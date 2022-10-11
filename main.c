#include <stdio.h>
#include <stdlib.h>
#include "fce.h"
//#include "inp.h"
#include "load_text.h"
//#include "ascii.h"

int main() {
    printf("1. Zadej čísla");
    printf("2. Načti čísla z text souboru");
    printf("3. Ověř čísla");
    int volba;
    scanf("%d", &volba);

    if (volba == 1) {

    } else if (volba == 2) {
        loadFromText();
    } else if (volba == 3) {

    } else {
        _Exit(1);
    }

    return 0;
}
