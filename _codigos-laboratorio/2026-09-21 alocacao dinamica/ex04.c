#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* string_clone(char* str) {
    int tam = strlen(str);
    char* new_str = malloc((tam + 1) * sizeof(char));
    
    strcpy(new_str, str);
    return new_str;
}

int main(){
    char str[20] = "ABC";

    char* copia = string_clone(str);
    printf("%s\n", copia); //"ABC"
    free(copia);
    copia = NULL;
}