#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char**argv)
{
    int i;
    size_t len = strlen(argv[1]);
    printf("Size of string: %zu bytes\n", len);
    for(i = 0; i < (int)len; i++)
        printf("%d, ", argv[1][i]);
    puts("");
    printf("qtd characters: %d\n", i);
    return 0;    
}