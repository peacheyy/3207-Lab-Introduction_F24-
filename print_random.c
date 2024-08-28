//Given Project code
#include <stdio.h>
#include <stdlib.h>
#include "random.h"

void rand_string(char *str, size_t size) {
    for (size_t n = 0; n < size; n++) {
        str[n] = randchar();
    } 
    str[size] = '\0';
}

char* rand_string_alloc(size_t size)
{
    char *s = malloc(size + 1);
    if (s) {
        rand_string(s, size);
    }
    return s;
}

int main(void) {
    char *word = rand_string_alloc(7);
    printf("%s\n", word);
}