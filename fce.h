#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

void write_text() {
    extern int a;
    FILE* f = fopen("TEXT.txt", "w");
    fprintf(f, "%d", a);
    fclose(f);
}

int write_bin() {
    extern int a, b, c;
    FILE* fb = fopen("DATA.DAT", "wb+");
    fwrite(&a, sizeof(a), 1, fb);
    fwrite(&b, sizeof(b), 1, fb);
    fwrite(&c, sizeof(c), 1, fb);
    fclose(fb);
}
