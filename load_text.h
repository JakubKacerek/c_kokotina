#include "stdio.h"
#include "fce.h"

 void loadFromText() {
    extern int a;
    FILE *f;
    f = fopen("TEXT.txt", "r");
    while (fscanf(f, "%d", &a) != EOF)
        printf("%d\n", a);
    fclose(f);
}
