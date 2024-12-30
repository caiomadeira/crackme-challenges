#include <stdio.h>
#include <string.h>
#include<stdlib.h>
// result: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA# -- 32 chars of 'A' + 1 of '#' because i remove the \n in fgets
int main(void) {
    char* input;
    char* b;  // Um buffer pequeno para causar overflow
    
    printf("Enter some text: ");
    input = (char*)malloc(10);
    b = (char*)malloc(sizeof(char));
    *b = '!';

    // Remover o caractere de nova linha, se presente
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    fgets(input, 100, stdin);  // Recebe entrada do usuário
    
    if (*b == '#') 
        puts("yes!!!!");
    else 
        puts("no.....");

    return 0;
}
