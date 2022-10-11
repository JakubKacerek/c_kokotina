#include <stdio.h>

#define INPUT_LENGTH 3

struct Data {
    char character;
    int number;
};

//struct Data input();

struct Data input() {
    printf("%s", "Napis ASCII hodnotu: \n");
    int b;
    scanf_s(" %d", &b);

    printf("%s", "Napis jeden character: \n");
    char a;
    scanf(" %c", &a);

    struct Data data = {a, b};
    return data;
}

