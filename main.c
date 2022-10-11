#include <stdio.h>
//#include "fce.h"
#include "inp.h"
//#include "load_text.h"
#include "asciiCheck.h"
void menu(void);
char volba;

int main(void) {
    struct Data data[INPUT_LENGTH];
    do {
        menu();
        switch (volba) {
            case 'a':
                for (int i= 0; i < INPUT_LENGTH ; i++) {
                    data[i] = input();
                    bool test = testForASCII(data[i].number, data[i].character);
                    if (test) {
                        printf("jsou stejne\n");
                    } else {
                        printf("jsou jine\n");
                    }
                }
                break;
            case 'b':
                //loadFromText();
                break;
            case 'c':
                break;
            default:
                break;
        }
    } while (volba != 'd');
}
void menu(void) {
    printf("---Hlavni menu---\n");
    printf("a. Zadej cisla\n");
    printf("b. Nacti cisla z text souboru\n");
    printf("c. Over cisla\n");
    printf("d. Konec\n");
    scanf(" %c", &volba);
}
