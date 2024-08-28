#include <stdlib.h>
#include <string.h>


char randchar() {
    const char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return alphabet[rand() % strlen(alphabet)];
}