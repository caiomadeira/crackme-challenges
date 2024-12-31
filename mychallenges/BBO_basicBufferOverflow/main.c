#include <stdio.h>
#include <string.h>
#include<stdlib.h>
// result: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA4100 -- 32 chars of 'A' + 1 of '#' because i remove the \n in fgets
int password(void)
{
    char* input;
    char* b;  // Um buffer pequeno para causar overflow
    
    printf("Password: ");
    input = (char*)malloc(10);
    b = (char*)malloc(5);
    //*b = '!';
    strcpy(b, "!100");
    // Remover o caractere de nova linha, se presente
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') 
        input[len - 1] = '\0';

    fgets(input, 100, stdin);  // Recebe entrada do usuário
    // Mostra os valores antes da verificação
    printf("input: %s\n", input);
    printf("b before overflow: %s\n", b);
    
    if (strcmp(b, "4100") == 0) //if (*b == '#') 
        return 0x1;
    else 
        return 0x0;
}

int main(void) {

    int result = password();
    if (result == 1)
        printf("Logged as admin.\n");
    else 
        printf("Logged as User\n");

    return 0;
}
